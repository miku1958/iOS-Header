//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class IXPlaceholder;

@protocol IXCoordinatorWithPlaceholderPromise <NSObject>

@property (readonly, nonatomic) BOOL hasPlaceholderPromise;

- (IXPlaceholder *)placeholderPromiseWithError:(id *)arg1;
- (BOOL)setPlaceholderPromise:(IXPlaceholder *)arg1 error:(id *)arg2;
@end

