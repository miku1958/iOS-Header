//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSRestrictions-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class NSString;

@protocol _IKJSRestrictions <IKJSRestrictions, JSExport>

@property (readonly, nonatomic) BOOL allowArtistActivity;
@property (readonly, nonatomic) BOOL allowsITunes;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedMovies;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedTVShows;
@property (readonly, nonatomic) BOOL appAnalyticsAllowed;
@property (readonly, nonatomic) BOOL appInstallationAllowed;
@property (readonly, nonatomic) long long maxAppRank;
@property (readonly, nonatomic) NSString *maxAppRating;

@end

