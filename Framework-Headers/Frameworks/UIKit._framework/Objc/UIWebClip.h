//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableData, NSString, NSURL, NSURLConnection, UIImage;
@protocol WebClipDelegate;

@interface UIWebClip : NSObject
{
    NSString *identifier;
    NSURL *pageURL;
    NSArray *icons;
    unsigned long long currentIconIndex;
    NSURL *startupImageURL;
    NSURL *startupLandscapeImageURL;
    NSString *title;
    BOOL fullScreen;
    BOOL classicMode;
    BOOL removalDisallowed;
    BOOL iconIsScreenShotBased;
    BOOL iconIsPrecomposed;
    BOOL iconIsPrerendered;
    unsigned long long supportedOrientations;
    long long statusBarStyle;
    UIImage *iconImage;
    UIImage *startupImage;
    UIImage *startupLandscapeImage;
    UIImage *initialLaunchImage;
    id<WebClipDelegate> delegate;
    NSString *dashcodePortName;
    NSString *dashcodeFrameworkPath;
    NSMutableData *_customIconData;
    NSURLConnection *_iconConnection;
    NSMutableData *_customStartupImageData;
    NSURLConnection *_startupImageConnection;
    NSMutableData *_customStartupLandscapeImageData;
    NSURLConnection *_startupLandscapeImageConnection;
    unsigned long long _webClipStatusBarStyle;
}

@property BOOL classicMode; // @synthesize classicMode;
@property (strong) NSString *dashcodeFrameworkPath; // @synthesize dashcodeFrameworkPath;
@property (strong) NSString *dashcodePortName; // @synthesize dashcodePortName;
@property (weak, nonatomic) id<WebClipDelegate> delegate; // @synthesize delegate;
@property BOOL fullScreen; // @synthesize fullScreen;
@property (readonly, strong, nonatomic) UIImage *iconImage;
@property (readonly) NSString *iconImagePath;
@property (readonly) BOOL iconIsPrecomposed; // @synthesize iconIsPrecomposed;
@property (readonly) BOOL iconIsPrerendered; // @synthesize iconIsPrerendered;
@property (readonly) BOOL iconIsScreenShotBased; // @synthesize iconIsScreenShotBased;
@property (strong) NSArray *icons; // @synthesize icons;
@property (copy) NSString *identifier; // @synthesize identifier;
@property (strong, nonatomic) UIImage *initialLaunchImage; // @synthesize initialLaunchImage;
@property (strong, nonatomic) NSURL *pageURL; // @synthesize pageURL;
@property BOOL removalDisallowed; // @synthesize removalDisallowed;
@property (strong, nonatomic) UIImage *startupImage; // @synthesize startupImage;
@property (strong) NSURL *startupImageURL; // @synthesize startupImageURL;
@property (strong, nonatomic) UIImage *startupLandscapeImage; // @synthesize startupLandscapeImage;
@property (strong) NSURL *startupLandscapeImageURL; // @synthesize startupLandscapeImageURL;
@property long long statusBarStyle; // @synthesize statusBarStyle;
@property unsigned long long supportedOrientations; // @synthesize supportedOrientations;
@property (copy, nonatomic) NSString *title; // @synthesize title;
@property (nonatomic) unsigned long long webClipStatusBarStyle; // @synthesize webClipStatusBarStyle=_webClipStatusBarStyle;

+ (id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2;
+ (BOOL)_webClipFullScreenValueForMetaTagContent:(id)arg1;
+ (id)_webClipLinkTagsFromWebDocumentView:(id)arg1;
+ (unsigned long long)_webClipOrientationsForMetaTagContent:(id)arg1;
+ (long long)_webClipStatusBarStyleForMetaTagContent:(id)arg1;
+ (BOOL)bundleIdentifierContainsWebClipIdentifier:(id)arg1;
+ (id)pathForWebClipCacheWithIdentifier:(id)arg1;
+ (id)pathForWebClipStorageWithIdentifier:(id)arg1;
+ (id)pathForWebClipWithIdentifier:(id)arg1;
+ (id)urlForWebClipWithIdentifier:(id)arg1;
+ (BOOL)webClipClassicModeValueForWebDocumentView:(id)arg1;
+ (BOOL)webClipFullScreenValueForWebDocumentView:(id)arg1;
+ (id)webClipIconsForWebClipLinkTags:(id)arg1 pageURL:(id)arg2;
+ (id)webClipIconsForWebDocumentView:(id)arg1;
+ (id)webClipIdentifierFromBundleIdentifier:(id)arg1;
+ (unsigned long long)webClipOrientationsForWebDocumentView:(id)arg1;
+ (long long)webClipStatusBarStyleForWebDocumentView:(id)arg1;
+ (id)webClipTitleForWebDocumentView:(id)arg1;
+ (id)webClipWithIdentifier:(id)arg1;
+ (id)webClipWithURL:(id)arg1;
+ (id)webClips;
+ (id)webClipsDirectoryPath;
- (void).cxx_destruct;
- (id)_bundleImageWithName:(id)arg1;
- (id)_bundleResourceWithName:(id)arg1;
- (id)_info;
- (id)_initWithIdentifier:(id)arg1;
- (void)_readPropertiesFromBundle:(id)arg1;
- (void)_reloadProperties;
- (void)_setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 isScreenShotBased:(BOOL)arg3;
- (BOOL)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2;
- (id)bundleIdentifier;
- (void)cancelMediaUpdate;
- (void)configureWithMetaTags:(id)arg1 linkTags:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)createOnDisk;
- (void)dealloc;
- (id)generateIconImageForFormat:(int)arg1 scale:(double)arg2;
- (id)getStartupImage:(long long)arg1;
- (BOOL)removeFromDisk;
- (void)requestCustomIconUpdate;
- (void)requestCustomLandscapeStartupImageUpdate;
- (void)requestCustomPortraitStartupImageUpdate;
- (void)requestIconUpdateInSpringBoard;
- (void)setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2;
- (void)setIconImageFromScreenshot:(id)arg1;
- (void)stopLoadingCustomIcon;
- (void)stopLoadingStartupImage;
- (void)stopLoadingStartupLandscapeImage;
- (BOOL)tryLoadingNextCustomIcon;
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1;
- (void)updateCustomMediaLocationsWithWebClipLinkTags:(id)arg1 baseURL:(id)arg2;
- (BOOL)updateOnDisk;

@end

