//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class NSArray, NSURL;

@protocol PKServiceAddPassesViewControllerProtocol <NSObject>
- (void)ingestCardAtURL:(NSURL *)arg1;
- (void)ingestPasses:(NSArray *)arg1;
- (void)setAllowsPassIngestion:(BOOL)arg1;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;
@end

