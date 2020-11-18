//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBDownloadingIcon.h>

#import <SpringBoard/SBCalendarIconImageProviderDelegate-Protocol.h>

@class SBCalendarIconImageProvider;

@interface SBCalendarDownloadingIcon : SBDownloadingIcon <SBCalendarIconImageProviderDelegate>
{
    SBCalendarIconImageProvider *_imageProvider;
}

@property (readonly, nonatomic) SBCalendarIconImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;

+ (BOOL)canGenerateIconsInBackground;
- (void).cxx_destruct;
- (void)calendarIconImageProviderHasChanged:(id)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)initWithDownloadingIconDataSource:(id)arg1;
- (void)localeChanged;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;

@end
