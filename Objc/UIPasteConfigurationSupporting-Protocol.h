//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIPasteConfiguration;

@protocol UIPasteConfigurationSupporting <NSObject>

@property (copy, nonatomic) UIPasteConfiguration *pasteConfiguration;


@optional
- (BOOL)canPasteItemProviders:(NSArray *)arg1;
- (void)pasteItemProviders:(NSArray *)arg1;
@end

