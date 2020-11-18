//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject
{
}

@property (nonatomic) BOOL configurable;
@property (nonatomic) BOOL enumerable;
@property (strong, nonatomic) RWIProtocolRuntimeRemoteObject *get;
@property (nonatomic) BOOL isOwn;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL nativeGetter;
@property (strong, nonatomic) RWIProtocolRuntimeRemoteObject *set;
@property (strong, nonatomic) RWIProtocolRuntimeRemoteObject *symbol;
@property (strong, nonatomic) RWIProtocolRuntimeRemoteObject *value;
@property (nonatomic) BOOL wasThrown;
@property (nonatomic) BOOL writable;

- (id)initWithName:(id)arg1 configurable:(BOOL)arg2 enumerable:(BOOL)arg3;

@end

