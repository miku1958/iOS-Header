//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUI/SFResourceLoader-Protocol.h>

@class NSString;
@protocol _SiriUICardLoaderDelegate;

@interface _SiriUICardLoader : NSObject <SFResourceLoader>
{
    BOOL _active;
    id<_SiriUICardLoaderDelegate> _delegate;
}

@property (nonatomic) BOOL active; // @synthesize active=_active;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SiriUICardLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerWithSearchFoundation;
- (void)_unregisterWithSearchFoundation;
- (BOOL)loadCard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

