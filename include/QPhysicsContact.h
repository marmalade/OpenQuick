/*
 * (C) 2012-2013 Marmalade.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

//------------------------------------------------------------------------------
/*!
	\file QPhysics.h
	\brief Physics singleton.
*/
//------------------------------------------------------------------------------

#ifndef __Q_PHYSICSCONTACT_H
#define __Q_PHYSICSCONTACT_H

#include "Box2D/Box2D.h"

// tolua_begin
namespace quick {
class QNode;
namespace physics {
// tolua_end

//------------------------------------------------------------------------------
// QContact
//------------------------------------------------------------------------------
// Class simply to wrap b2Contact and expose it to Lua.
// Typically these are created on the C++ stack; call across to Lua; then pull off the C++ stack

/**
The Contact object is passed on the preCollision event.
It can be inspected and modified to further influence the collision event.
*/
class QContact { // tolua_export
public:
    QContact(b2Contact* b) : m_Contact(b) {};
    ~QContact() {};

    /**
    Returns true if the contact is enabled, otherwise false.
    @return True only if the contact is enabled.
    */
    bool isEnabled() { return m_Contact->IsEnabled(); }

    /**
    Sets whether or not the contact is enabled.
    @param b True to enable the contact, false to disable it.
    */
    void setEnabled(bool b) { m_Contact->SetEnabled(b); }

    /**
    Returns true if the contact is touching, otherwise false.
    @return True only if the contact is touching.
    */
    bool isTouching() { return m_Contact->IsTouching(); }

    // TODO... USE CUSTOM TOLUA PROPERTIES TO DRIVE THESE FROM PURE MEMBER ACCESS, e.g. contact.friction

    /**
    Gets the friction value on the contact.
    @return The contact's friction value.
    */
    float getFriction() { return m_Contact->GetFriction(); }

    /**
    Sets the friction value on the contact.
    @param f The friction value to set.
    */
    void setFriction(float f) { m_Contact->SetFriction(f); }

    /**
    Gets the restitution value on the contact.
    @return The contact's restitution value.
    */
    float getRestitution() { return m_Contact->GetRestitution(); }

    /**
    Sets the restitution value on the contact.
    @param f The restitution value to set.
    */
    void setRestitution(float r) { m_Contact->SetRestitution(r); }
        
    b2Contact* m_Contact;

}; // tolua_export

// tolua_begin
}
}
// tolua_end

#endif // __Q_PHYSICSCONTACT_H
