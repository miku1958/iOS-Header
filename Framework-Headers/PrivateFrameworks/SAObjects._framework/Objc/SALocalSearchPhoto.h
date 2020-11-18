//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, NSURL, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *fullsize;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *largeSize;
@property (copy, nonatomic) NSURL *maximumSize;
@property (strong, nonatomic) SAUIAppPunchOut *photoPunchOut;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *thumbnail;

+ (id)photo;
+ (id)photoWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
