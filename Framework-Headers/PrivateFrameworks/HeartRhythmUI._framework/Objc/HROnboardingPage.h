//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HROnboardingPage : NSObject
{
    BOOL _lastPage;
    long long _sequencePage;
    Class _viewControllerClass;
}

@property (nonatomic) BOOL lastPage; // @synthesize lastPage=_lastPage;
@property (readonly, nonatomic) long long sequencePage; // @synthesize sequencePage=_sequencePage;
@property (readonly, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;

- (void).cxx_destruct;
- (id)initWithViewControllerClass:(Class)arg1 sequencePage:(long long)arg2;

@end

