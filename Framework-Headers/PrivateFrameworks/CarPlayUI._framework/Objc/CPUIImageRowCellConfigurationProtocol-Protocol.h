//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlayUI/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CPUIImageRowCellConfigurationProtocol <NSObject>
- (NSArray *)artworkCatalogs;
- (void (^)(long long))selectGridItemBlock;
- (void (^)(void))selectTitleBlock;
- (BOOL)showActivityIndicator;
- (NSString *)title;
@end

