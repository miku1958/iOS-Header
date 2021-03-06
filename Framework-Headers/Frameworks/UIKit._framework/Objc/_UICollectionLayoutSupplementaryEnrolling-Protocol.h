//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol _UICollectionLayoutSupplementaryEnrolling <NSObject>
- (void)commitEnrollment:(NSUUID *)arg1;
- (long long)countForKind:(NSString *)arg1;
- (NSUUID *)enrollSupplementaryForKind:(NSString *)arg1;
- (long long)kindIndexForEnrollmentIdentifier:(NSUUID *)arg1;
- (void)pruneUncommitedEnrollments;
@end

