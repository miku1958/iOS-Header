//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLMomentRefreshable-Protocol.h>

@class NSArray, NSData, NSDate, NSObject, NSOrderedSet, NSString;
@protocol NSCopying, PLMomentData;

@protocol PLMomentListData <PLMomentRefreshable>

@property (strong, nonatomic) NSDate *endDate;
@property (nonatomic) short generationType;
@property (nonatomic) short granularityLevel;
@property (strong, nonatomic) NSOrderedSet *moments;
@property (strong, nonatomic) NSDate *representativeDate;
@property (strong, nonatomic) NSData *reverseLocationData;
@property (nonatomic) BOOL reverseLocationDataIsValid;
@property (nonatomic) int sortIndex;
@property (strong, nonatomic) NSDate *startDate;
@property (readonly, strong, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property (strong, nonatomic) NSArray *userTitles;

- (void)addMomentToFront:(id<PLMomentData>)arg1;
- (void)addMoments:(NSOrderedSet *)arg1;
- (void)delete;
- (BOOL)isDeleted;
- (void)removeMoments:(NSOrderedSet *)arg1;

@optional
- (NSString *)momentListDebugDescription;
@end

