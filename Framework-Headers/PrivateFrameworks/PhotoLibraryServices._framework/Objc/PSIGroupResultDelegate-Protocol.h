//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class PSIGroupResult;

@protocol PSIGroupResultDelegate <NSObject>
- (void)group:(PSIGroupResult *)arg1 fetchOwningContentString:(BOOL)arg2 assetIdRange:(struct _NSRange)arg3 collectionIdRange:(struct _NSRange)arg4 completionHandler:(void (^)(NSString *, NSArray *, NSArray *))arg5;
@end
