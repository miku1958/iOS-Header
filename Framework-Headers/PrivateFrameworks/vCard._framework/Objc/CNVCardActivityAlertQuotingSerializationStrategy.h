//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardActivityAlertAbstractSerializationStrategy-Protocol.h>

@class NSString;

@interface CNVCardActivityAlertQuotingSerializationStrategy : NSObject <CNVCardActivityAlertAbstractSerializationStrategy>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)regex;
+ (id)serializeString:(id)arg1;
+ (BOOL)strategyWouldAlterString:(id)arg1;

@end

