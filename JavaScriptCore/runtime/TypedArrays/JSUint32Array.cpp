/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSUint32Array.h"

#include "Lookup.h"
#include "GlobalDataHelper.h"

#include "JSUint32Array.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>
#include <wtf/Uint32Array.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSUint32Array);
/* Hash table */

static const HashTableValue JSUint32ArrayTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint32ArrayLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint32ArrayConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSUint32ArrayTable = { 5, 3, JSUint32ArrayTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSUint32ArrayConstructorTableValues[] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint32ArrayBYTES_PER_ELEMENT), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSUint32ArrayConstructorTable = { 2, 1, JSUint32ArrayConstructorTableValues, 0 };
const ClassInfo JSUint32ArrayConstructor::s_info = { "Uint32ArrayConstructor", &Base::s_info, &JSUint32ArrayConstructorTable, 0, CREATE_METHOD_TABLE(JSUint32ArrayConstructor) };

JSUint32ArrayConstructor::JSUint32ArrayConstructor(Structure* structure, JSGlobalObject* globalObject)
    : InternalFunction(globalObject, structure)
{
}

void JSUint32ArrayConstructor::finishCreation(ExecState* exec, JSGlobalObject* globalObject)
{
	JSC::JSObject * proto = JSUint32ArrayPrototype::self(exec, globalObject);
    Base::finishCreation(exec->globalData(), Identifier(exec, proto->classInfo()->className));
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, proto, DontDelete | ReadOnly);
    putDirect(exec->globalData(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSUint32ArrayConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
	return getStaticFunctionSlot<InternalFunction>(exec, &JSUint32ArrayConstructorTable, jsCast<JSUint32ArrayConstructor*>(cell), propertyName, slot);
}

bool JSUint32ArrayConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
	return getStaticFunctionDescriptor<InternalFunction>(exec, &JSUint32ArrayConstructorTable, jsCast<JSUint32ArrayConstructor*>(object), propertyName, descriptor);
}

ConstructType JSUint32ArrayConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSUint32Array;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSUint32ArrayPrototypeTableValues[] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUint32ArrayBYTES_PER_ELEMENT), (intptr_t)0, NoIntrinsic },
    { "subarray", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsUint32ArrayPrototypeFunctionSubarray), (intptr_t)2, NoIntrinsic },
    { "set", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsUint32ArrayPrototypeFunctionSet), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSUint32ArrayPrototypeTable = { 8, 7, JSUint32ArrayPrototypeTableValues, 0 };
static const HashTable* getJSUint32ArrayPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSUint32ArrayPrototypeTable);
}

const ClassInfo JSUint32ArrayPrototype::s_info = { "Uint32ArrayPrototype", &Base::s_info, 0, getJSUint32ArrayPrototypeTable, CREATE_METHOD_TABLE(JSUint32ArrayPrototype) };

JSObject* JSUint32ArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSUint32ArrayPrototype>(exec, globalObject);
}

bool JSUint32ArrayPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    JSUint32ArrayPrototype* thisObject = jsCast<JSUint32ArrayPrototype*>(cell);
    return getStaticPropertySlot<JSUint32ArrayPrototype, JSObject>(exec, getJSUint32ArrayPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSUint32ArrayPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    JSUint32ArrayPrototype* thisObject = jsCast<JSUint32ArrayPrototype*>(object);
    return getStaticPropertyDescriptor<JSUint32ArrayPrototype, JSObject>(exec, getJSUint32ArrayPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSUint32ArrayTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSUint32ArrayTable);
}

const ClassInfo JSUint32Array::s_info = { "Uint32Array", &Base::s_info, 0, getJSUint32ArrayTable , CREATE_METHOD_TABLE(JSUint32Array) };

JSUint32Array::JSUint32Array(Structure* structure, JSGlobalObject* globalObject, PassRefPtr<Uint32Array> impl)
    : JSArrayBufferView(structure, globalObject, impl)
{
}

void JSUint32Array::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    TypedArrayDescriptor descriptor(&JSUint32Array::s_info, OBJECT_OFFSETOF(JSUint32Array, m_storage), OBJECT_OFFSETOF(JSUint32Array, m_storageLength));
    globalData.registerTypedArrayDescriptor(impl(), descriptor);
    m_storage = impl()->data();
    m_storageLength = impl()->length();
    ASSERT(inherits(&s_info));
}

JSObject* JSUint32Array::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSUint32ArrayPrototype::create(exec->globalData(), globalObject, JSUint32ArrayPrototype::createStructure(exec->globalData(), globalObject, JSArrayBufferViewPrototype::self(exec, globalObject)));
}

bool JSUint32Array::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    JSUint32Array* thisObject = jsCast<JSUint32Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Uint32Array*>(thisObject->impl())->length()) {
        slot.setValue(thisObject->getByIndex(exec, index));
        return true;
    }
    return getStaticValueSlot<JSUint32Array, Base>(exec, getJSUint32ArrayTable(exec), thisObject, propertyName, slot);
}

bool JSUint32Array::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    JSUint32Array* thisObject = jsCast<JSUint32Array*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Uint32Array*>(thisObject->impl())->length()) {
        descriptor.setDescriptor(thisObject->getByIndex(exec, index), DontDelete);
        return true;
    }
    return getStaticValueDescriptor<JSUint32Array, Base>(exec, getJSUint32ArrayTable(exec), thisObject, propertyName, descriptor);
}

bool JSUint32Array::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    JSUint32Array* thisObject = jsCast<JSUint32Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (propertyName < static_cast<Uint32Array*>(thisObject->impl())->length()) {
        slot.setValue(thisObject->getByIndex(exec, propertyName));
        return true;
    }
    return thisObject->methodTable()->getOwnPropertySlot(thisObject, exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsUint32ArrayLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSUint32Array* castedThis = jsCast<JSUint32Array*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Uint32Array* impl = static_cast<Uint32Array*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


JSValue jsUint32ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSUint32Array* domObject = jsCast<JSUint32Array*>(asObject(slotBase));
    return JSUint32Array::getConstructor(exec, domObject->globalObject());
}

void JSUint32Array::put(JSCell* cell, ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    JSUint32Array* thisObject = jsCast<JSUint32Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok) {
        thisObject->indexSetter(exec, index, value);
        return;
    }
    Base::put(thisObject, exec, propertyName, value, slot);
}

void JSUint32Array::putByIndex(JSCell* cell, ExecState* exec, unsigned propertyName, JSValue value, bool)
{
    JSUint32Array* thisObject = jsCast<JSUint32Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    thisObject->indexSetter(exec, propertyName, value);
    return;
}

void JSUint32Array::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSUint32Array* thisObject = jsCast<JSUint32Array*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<Uint32Array*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSUint32Array::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSUint32ArrayConstructor>(exec, jsCast<JSGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsUint32ArrayPrototypeFunctionSubarray(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSUint32Array::s_info))
        return throwVMTypeError(exec);
    JSUint32Array* castedThis = jsCast<JSUint32Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSUint32Array::s_info);
    Uint32Array* impl = static_cast<Uint32Array*>(castedThis->impl());
    int start(MAYBE_MISSING_PARAMETER(exec, 0, DefaultIsUndefined).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->subarray(start)));
        return JSValue::encode(result);
    }

    int end(MAYBE_MISSING_PARAMETER(exec, 1, DefaultIsUndefined).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->subarray(start, end)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsUint32ArrayPrototypeFunctionSet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSUint32Array::s_info))
        return throwVMTypeError(exec);
    JSUint32Array* castedThis = jsCast<JSUint32Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSUint32Array::s_info);
    return JSValue::encode(castedThis->set(exec));
}

// Constant getters

JSValue jsUint32ArrayBYTES_PER_ELEMENT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}


JSValue JSUint32Array::getByIndex(ExecState*, unsigned index)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    double result = static_cast<Uint32Array*>(impl())->item(index);
    if (isnan(result))
        return jsNaN();
    return JSValue(result);
}

Uint32Array* toUint32Array(JSC::JSValue value)
{
    return value.inherits(&JSUint32Array::s_info) ? jsCast<JSUint32Array*>(asObject(value))->impl() : 0;
}

}