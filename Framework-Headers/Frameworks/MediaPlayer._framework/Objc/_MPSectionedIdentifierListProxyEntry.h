//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPSectionedIdentifierListEnumerationResult-Protocol.h>

@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult>
{
    long long _entryType;
}

@property (readonly, nonatomic) long long branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long entryType; // @synthesize entryType=_entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)endEntry;
+ (id)startEntry;
- (id)itemResult;
- (id)trackingEntryResult;

@end
