//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, VUIMediaLibraryManager;
@protocol VUIHomeShareMediaLibraryManagerDelegate;

@protocol VUIHomeShareMediaLibraryManager <NSObject>

@property (weak, nonatomic) id<VUIHomeShareMediaLibraryManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;

- (void)beginDiscoveringMediaLibraries;
- (void)endDiscoveringMediaLibraries;
- (id)initWithManager:(VUIMediaLibraryManager *)arg1;
@end

