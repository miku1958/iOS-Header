//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolRuntimeStructureDescription : RWIProtocolJSONObject
{
}

@property (copy, nonatomic) NSString *constructorName;
@property (copy, nonatomic) NSArray *fields;
@property (nonatomic) BOOL isImprecise;
@property (copy, nonatomic) NSArray *optionalFields;
@property (strong, nonatomic) RWIProtocolRuntimeStructureDescription *prototypeStructure;


@end

