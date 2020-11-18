//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUSearchResult-Protocol.h>

@class NSArray, NSAttributedString, NSString, PSIGroupResult;
@protocol OS_dispatch_queue, PUSearchResultsValueDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchResultsValue : NSObject <PUSearchResult>
{
    NSObject<OS_dispatch_queue> *_queue;
    double _score;
    NSAttributedString *_attributedDisplayTitle;
    NSString *_displaySubtitle;
    NSArray *_uuids;
    id _albumUUID;
    unsigned long long _approximateCount;
    id<PUSearchResultsValueDelegate> _delegate;
    PSIGroupResult *_groupResult;
}

@property (strong) id albumUUID; // @synthesize albumUUID=_albumUUID;
@property unsigned long long approximateCount; // @synthesize approximateCount=_approximateCount;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUSearchResultsValueDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displaySubtitle;
@property (readonly, copy) NSString *displayTitle;
@property (strong, setter=_setGroupResult:) PSIGroupResult *groupResult; // @synthesize groupResult=_groupResult;
@property (readonly) unsigned long long hash;
@property (readonly) double score;
@property (readonly, copy) NSString *searchString;
@property (readonly) Class superclass;
@property (strong) NSArray *uuids; // @synthesize uuids=_uuids;

- (void).cxx_destruct;
- (void)_computeScoreWithMaxGroupedResultsCount:(unsigned long long)arg1;
- (void)_setAlbumUUID:(id)arg1;
- (void)_setApproximateCount:(unsigned long long)arg1;
- (void)_setUUIDs:(id)arg1;
- (long long)compare:(id)arg1;
- (id)displayTitleWithDefaultAttributes:(id)arg1 highlightedAttributes:(id)arg2;
- (void)fetchRemainingUUIDs:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)isFinished;

@end

