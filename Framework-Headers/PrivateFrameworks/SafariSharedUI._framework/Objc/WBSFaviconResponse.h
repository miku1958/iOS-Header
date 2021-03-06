//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSSiteMetadataResponse.h>

#import <SafariSharedUI/WBSIconResponse-Protocol.h>

@class NSString, UIColor, UIImage;

@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse>
{
    UIImage *_favicon;
    unsigned long long _faviconType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *extractedBackgroundColor;
@property (readonly, nonatomic) UIImage *favicon; // @synthesize favicon=_favicon;
@property (readonly, nonatomic) unsigned long long faviconType; // @synthesize faviconType=_faviconType;
@property (readonly, nonatomic, getter=isGenerated) BOOL generated;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 favicon:(id)arg2 faviconType:(unsigned long long)arg3;

@end

