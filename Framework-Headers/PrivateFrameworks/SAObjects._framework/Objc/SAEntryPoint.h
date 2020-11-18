//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceComparable-Protocol.h>
#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAEntryPoint : AceObject <SAAceSerializable, SAAceComparable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (readonly) Class superclass;

+ (id)entryPoint;
+ (id)entryPointWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

