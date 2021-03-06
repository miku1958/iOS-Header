//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class NSArray, TVPlaylist, UIColor, UIView;

@interface TVMediaInfo : NSObject <NSCopying>
{
    long long _intent;
    UIView *_contentView;
    UIColor *_backgroundColor;
    NSArray *_imageProxies;
    TVPlaylist *_playlist;
    UIView *_overlayView;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
@property (nonatomic) long long intent; // @synthesize intent=_intent;
@property (strong, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property (strong, nonatomic) TVPlaylist *playlist; // @synthesize playlist=_playlist;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

