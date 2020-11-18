//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAppInfo.h>

#import <SAObjects/SASyncWrap-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SAAceUiAppInfo : SAAppInfo <SASyncWrap>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *generation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property (readonly) Class superclass;

+ (id)aceUiAppInfo;
+ (id)aceUiAppInfoWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

