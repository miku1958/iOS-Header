//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GCFrontmostApplicationObserverDelegate;

@interface GCFrontmostApplicationObserver : NSObject
{
    int _frontmostPid;
    id<GCFrontmostApplicationObserverDelegate> _delegate;
}

@property (weak, nonatomic) id<GCFrontmostApplicationObserverDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;

@end

