//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookCoverUtility/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol BCUOperation;

@protocol BCUSeriesCoverEffectsFilter <NSObject>

@property (readonly, nonatomic) NSString *identifier;

- (id<BCUOperation>)newOperationWithImages:(NSArray *)arg1 filters:(NSArray *)arg2 size:(struct CGSize)arg3 contentsScale:(double)arg4 waitForCPUSynchronization:(BOOL)arg5 completion:(void (^)(id<BCUOperation>, id<BCUPurgeableImage>, struct UIEdgeInsets, struct CGPath *))arg6;
@end
