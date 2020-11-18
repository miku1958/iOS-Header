//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APUIActionCardViewConfig : NSObject
{
    BOOL _showThumbnailImage;
    BOOL _useAppIconAsThumbnail;
    BOOL _showActionButton;
    BOOL _showAppFootnote;
    BOOL _showAppFootnoteIcon;
    BOOL _useTinyIconVariant;
    BOOL _fallbackToCustomResponseString;
    unsigned long long _style;
    NSString *_bundleId;
    long long _maxLinesForTitle;
    long long _maxLinesForSubtitle;
    long long _maxLinesForFootnote;
}

@property (copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (nonatomic) BOOL fallbackToCustomResponseString; // @synthesize fallbackToCustomResponseString=_fallbackToCustomResponseString;
@property (nonatomic) long long maxLinesForFootnote; // @synthesize maxLinesForFootnote=_maxLinesForFootnote;
@property (nonatomic) long long maxLinesForSubtitle; // @synthesize maxLinesForSubtitle=_maxLinesForSubtitle;
@property (nonatomic) long long maxLinesForTitle; // @synthesize maxLinesForTitle=_maxLinesForTitle;
@property (nonatomic) BOOL showActionButton; // @synthesize showActionButton=_showActionButton;
@property (nonatomic) BOOL showAppFootnote; // @synthesize showAppFootnote=_showAppFootnote;
@property (nonatomic) BOOL showAppFootnoteIcon; // @synthesize showAppFootnoteIcon=_showAppFootnoteIcon;
@property (nonatomic) BOOL showThumbnailImage; // @synthesize showThumbnailImage=_showThumbnailImage;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (nonatomic) BOOL useAppIconAsThumbnail; // @synthesize useAppIconAsThumbnail=_useAppIconAsThumbnail;
@property (nonatomic) BOOL useTinyIconVariant; // @synthesize useTinyIconVariant=_useTinyIconVariant;

- (void).cxx_destruct;
- (id)init;

@end
