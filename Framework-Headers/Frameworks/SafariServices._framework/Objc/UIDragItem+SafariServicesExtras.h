//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDragItem.h>

@class NSURL, WebBookmark;

@interface UIDragItem (SafariServicesExtras)

@property (readonly, nonatomic) WebBookmark *_sf_localBookmark;
@property (readonly, nonatomic) NSURL *_sf_localURL;

+ (void)_sf_loadObjectsFromDragItems:(id)arg1 usingLocalObjectLoader:(CDUnknownFunctionPointerType)arg2 objectLoader:(CDUnknownFunctionPointerType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_sf_initWithBookmark:(id)arg1;
@end

