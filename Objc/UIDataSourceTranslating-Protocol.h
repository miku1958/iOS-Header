//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath;

@protocol UIDataSourceTranslating <NSObject>
- (NSIndexPath *)dataSourceIndexPathForPresentationIndexPath:(NSIndexPath *)arg1;
- (long long)dataSourceSectionIndexForPresentationSectionIndex:(long long)arg1;
- (void)performUsingPresentationValues:(void (^)(void))arg1;
- (NSIndexPath *)presentationIndexPathForDataSourceIndexPath:(NSIndexPath *)arg1;
- (long long)presentationSectionIndexForDataSourceSectionIndex:(long long)arg1;
@end

