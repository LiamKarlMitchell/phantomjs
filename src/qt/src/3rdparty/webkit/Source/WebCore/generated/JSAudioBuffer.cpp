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

#if ENABLE(WEB_AUDIO ) && ENABLE( WEBGL)

#include "JSAudioBuffer.h"

#include "AudioBuffer.h"
#include "ExceptionCode.h"
#include "Float32Array.h"
#include "JSDOMBinding.h"
#include "JSFloat32Array.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSAudioBuffer);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioBufferTableValues[7] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "duration", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferDuration), (intptr_t)0 THUNK_GENERATOR(0) },
    { "sampleRate", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferSampleRate), (intptr_t)0 THUNK_GENERATOR(0) },
    { "gain", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferGain), (intptr_t)setJSAudioBufferGain THUNK_GENERATOR(0) },
    { "numberOfChannels", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferNumberOfChannels), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioBufferConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioBufferTable = { 16, 15, JSAudioBufferTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioBufferConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioBufferConstructorTable = { 1, 0, JSAudioBufferConstructorTableValues, 0 };
class JSAudioBufferConstructor : public DOMConstructorObject {
public:
    JSAudioBufferConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSAudioBufferConstructor::s_info = { "AudioBufferConstructor", &DOMConstructorObject::s_info, &JSAudioBufferConstructorTable, 0 };

JSAudioBufferConstructor::JSAudioBufferConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSAudioBufferPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSAudioBufferConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioBufferConstructor, JSDOMWrapper>(exec, &JSAudioBufferConstructorTable, this, propertyName, slot);
}

bool JSAudioBufferConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioBufferConstructor, JSDOMWrapper>(exec, &JSAudioBufferConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioBufferPrototypeTableValues[2] =
{
    { "getChannelData", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioBufferPrototypeFunctionGetChannelData), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioBufferPrototypeTable = { 2, 1, JSAudioBufferPrototypeTableValues, 0 };
const ClassInfo JSAudioBufferPrototype::s_info = { "AudioBufferPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSAudioBufferPrototypeTable, 0 };

JSObject* JSAudioBufferPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioBuffer>(exec, globalObject);
}

bool JSAudioBufferPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSAudioBufferPrototypeTable, this, propertyName, slot);
}

bool JSAudioBufferPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSAudioBufferPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSAudioBuffer::s_info = { "AudioBuffer", &JSDOMWrapper::s_info, &JSAudioBufferTable, 0 };

JSAudioBuffer::JSAudioBuffer(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioBuffer> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSAudioBuffer::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSAudioBufferPrototype(exec->globalData(), globalObject, JSAudioBufferPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSAudioBuffer::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioBuffer, Base>(exec, &JSAudioBufferTable, this, propertyName, slot);
}

bool JSAudioBuffer::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioBuffer, Base>(exec, &JSAudioBufferTable, this, propertyName, descriptor);
}

JSValue jsAudioBufferLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBuffer* castedThis = static_cast<JSAudioBuffer*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBuffer* imp = static_cast<AudioBuffer*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsAudioBufferDuration(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBuffer* castedThis = static_cast<JSAudioBuffer*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBuffer* imp = static_cast<AudioBuffer*>(castedThis->impl());
    JSValue result = jsNumber(imp->duration());
    return result;
}


JSValue jsAudioBufferSampleRate(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBuffer* castedThis = static_cast<JSAudioBuffer*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBuffer* imp = static_cast<AudioBuffer*>(castedThis->impl());
    JSValue result = jsNumber(imp->sampleRate());
    return result;
}


JSValue jsAudioBufferGain(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBuffer* castedThis = static_cast<JSAudioBuffer*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBuffer* imp = static_cast<AudioBuffer*>(castedThis->impl());
    JSValue result = jsNumber(imp->gain());
    return result;
}


JSValue jsAudioBufferNumberOfChannels(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBuffer* castedThis = static_cast<JSAudioBuffer*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioBuffer* imp = static_cast<AudioBuffer*>(castedThis->impl());
    JSValue result = jsNumber(imp->numberOfChannels());
    return result;
}


JSValue jsAudioBufferConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioBuffer* domObject = static_cast<JSAudioBuffer*>(asObject(slotBase));
    return JSAudioBuffer::getConstructor(exec, domObject->globalObject());
}

void JSAudioBuffer::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSAudioBuffer, Base>(exec, propertyName, value, &JSAudioBufferTable, this, slot);
}

void setJSAudioBufferGain(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSAudioBuffer* castedThis = static_cast<JSAudioBuffer*>(thisObject);
    AudioBuffer* imp = static_cast<AudioBuffer*>(castedThis->impl());
    imp->setGain(value.toFloat(exec));
}


JSValue JSAudioBuffer::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioBufferConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsAudioBufferPrototypeFunctionGetChannelData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioBuffer::s_info))
        return throwVMTypeError(exec);
    JSAudioBuffer* castedThis = static_cast<JSAudioBuffer*>(asObject(thisValue));
    AudioBuffer* imp = static_cast<AudioBuffer*>(castedThis->impl());
    unsigned channelIndex(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getChannelData(channelIndex)));
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AudioBuffer* impl)
{
    return wrap<JSAudioBuffer>(exec, globalObject, impl);
}

AudioBuffer* toAudioBuffer(JSC::JSValue value)
{
    return value.inherits(&JSAudioBuffer::s_info) ? static_cast<JSAudioBuffer*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEB_AUDIO ) && ENABLE( WEBGL)