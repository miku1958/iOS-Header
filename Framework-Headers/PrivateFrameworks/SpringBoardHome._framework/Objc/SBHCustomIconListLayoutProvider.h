//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListLayoutProvider-Protocol.h>

@class NSDictionary;
@protocol SBIconListLayout;

@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider>
{
    NSDictionary *_listLayouts;
    id<SBIconListLayout> _defaultLayout;
}

@property (readonly, nonatomic) id<SBIconListLayout> defaultLayout; // @synthesize defaultLayout=_defaultLayout;
@property (readonly, copy, nonatomic) NSDictionary *listLayouts; // @synthesize listLayouts=_listLayouts;

- (void).cxx_destruct;
- (id)init;
- (id)initWithListLayouts:(id)arg1;
- (id)initWithListLayouts:(id)arg1 defaultLayout:(id)arg2;
- (id)layoutForIconLocation:(id)arg1;

@end

