//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SFActionItem, SFImage, SFPunchout;

@interface _APUIActionCardInfo : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_footnote;
    NSString *_bundleId;
    NSString *_appTitle;
    SFImage *_image;
    SFActionItem *_actionItem;
    SFPunchout *_actionPunchout;
}

@property (strong, nonatomic) SFActionItem *actionItem; // @synthesize actionItem=_actionItem;
@property (strong, nonatomic) SFPunchout *actionPunchout; // @synthesize actionPunchout=_actionPunchout;
@property (strong, nonatomic) NSString *appTitle; // @synthesize appTitle=_appTitle;
@property (strong, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (strong, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property (strong, nonatomic) SFImage *image; // @synthesize image=_image;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;

@end
