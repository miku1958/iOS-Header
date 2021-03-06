//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSString;

@interface MPMediaControlsConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _shouldPreventAutorotation;
    BOOL _allowsNowPlayingApplicationLaunch;
    BOOL _sortByIsVideoRoute;
    long long _style;
    long long _initatorStyle;
    NSString *_routingContextUID;
    NSString *_presentingAppBundleID;
    NSString *_routeUID;
    struct CGRect _sourceRect;
}

@property (nonatomic) BOOL allowsNowPlayingApplicationLaunch; // @synthesize allowsNowPlayingApplicationLaunch=_allowsNowPlayingApplicationLaunch;
@property (nonatomic) long long initatorStyle; // @synthesize initatorStyle=_initatorStyle;
@property (copy, nonatomic) NSString *presentingAppBundleID; // @synthesize presentingAppBundleID=_presentingAppBundleID;
@property (copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property (copy, nonatomic) NSString *routingContextUID; // @synthesize routingContextUID=_routingContextUID;
@property (nonatomic) BOOL shouldPreventAutorotation; // @synthesize shouldPreventAutorotation=_shouldPreventAutorotation;
@property (nonatomic) BOOL sortByIsVideoRoute; // @synthesize sortByIsVideoRoute=_sortByIsVideoRoute;
@property (nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property (nonatomic) long long style; // @synthesize style=_style;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

