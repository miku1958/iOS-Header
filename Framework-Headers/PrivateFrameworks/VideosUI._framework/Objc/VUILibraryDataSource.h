//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VUILibraryDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryDataSource : NSObject
{
    BOOL _hasCompletedInitialFetch;
    id<VUILibraryDataSourceDelegate> _delegate;
}

@property (weak, nonatomic) id<VUILibraryDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL hasCompletedInitialFetch; // @synthesize hasCompletedInitialFetch=_hasCompletedInitialFetch;

- (void).cxx_destruct;

@end

