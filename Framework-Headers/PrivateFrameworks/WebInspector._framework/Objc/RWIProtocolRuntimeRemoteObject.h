//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimeRemoteObject : RWIProtocolJSONObject
{
}

@property (copy, nonatomic) NSString *className;
@property (strong, nonatomic) RWIProtocolRuntimeRemoteObject *classPrototype;
@property (copy, nonatomic) NSString *objectId;
@property (strong, nonatomic) RWIProtocolRuntimeObjectPreview *preview;
@property (nonatomic) int size;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (nonatomic) long long subtype;
@property (nonatomic) long long type;
@property (strong, nonatomic) RWIProtocolJSONObject *value;

- (id)initWithType:(long long)arg1;

@end

