//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class NSSet, VUIViewElementDataSource;

@interface IKViewElement (VideosUI)

@property (readonly, nonatomic) VUIViewElementDataSource *vui_DataSource;
@property (readonly, copy, nonatomic) NSSet *vui_updateEventDescriptors;

+ (id)_vui_updateEventDescriptorWithType:(unsigned long long)arg1;
- (id)_backgroundImageProxyFromImageElement:(id)arg1;
- (void)_parseElementIfNecessary;
- (id)mediaInfoForEvent:(id)arg1 playbackContext:(unsigned long long)arg2 includingVideo:(BOOL)arg3;
- (id)vui_description;
- (id)vui_imageURL;
- (id)vui_title;
@end
