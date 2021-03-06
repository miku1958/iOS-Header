//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedElement-Protocol.h>

@class NSArray, NSString;

@interface FCFeedViewportPersistenceGap : NSObject <FCFeedElement>
{
    NSString *_identifier;
    NSString *_firstGroupID;
    NSString *_lastGroupID;
    NSArray *_hiddenElements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long feedElementType;
@property (readonly, copy, nonatomic) NSString *firstGroupID; // @synthesize firstGroupID=_firstGroupID;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *hiddenElements; // @synthesize hiddenElements=_hiddenElements;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *lastGroupID; // @synthesize lastGroupID=_lastGroupID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithHiddenElements:(id)arg1;
- (id)copyWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirstGroupID:(id)arg1 lastGroupID:(id)arg2 hiddenElements:(id)arg3;
- (id)initWithIdentifier:(id)arg1 firstGroupID:(id)arg2 lastGroupID:(id)arg3 hiddenElements:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGap;

@end

