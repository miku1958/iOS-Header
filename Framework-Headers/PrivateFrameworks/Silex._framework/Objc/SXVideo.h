//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideo-Protocol.h>

@class NSString;

@interface SXVideo : NSObject <SXVideo>
{
    BOOL _allowsCallToActionBar;
    unsigned long long _videoType;
}

@property (readonly, nonatomic) BOOL allowsCallToActionBar; // @synthesize allowsCallToActionBar=_allowsCallToActionBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long videoType; // @synthesize videoType=_videoType;

- (id)initWithVideoType:(unsigned long long)arg1;

@end

