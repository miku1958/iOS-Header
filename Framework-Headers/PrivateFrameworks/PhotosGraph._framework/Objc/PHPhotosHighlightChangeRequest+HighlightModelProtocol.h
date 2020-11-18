//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHPhotosHighlightChangeRequest.h>

#import <PhotosGraph/PGHighlightModelChangeRequest-Protocol.h>

@class NSString;

@interface PHPhotosHighlightChangeRequest (HighlightModelProtocol) <PGHighlightModelChangeRequest>

@property (strong, nonatomic) NSString *dateDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short enrichmentState;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mood;
@property (nonatomic) double promotionScore;
@property (strong, nonatomic) NSString *smartDescription;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *verboseSmartDescription;

- (void)clearCurations;
- (void)enumerateMomentChangeRequestsForUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@end
