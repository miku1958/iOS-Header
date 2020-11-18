//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKDrawItem-Protocol.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VTKSquareDrawItem : NSObject <VTKDrawItem>
{
    UIColor *_color;
    struct CGRect _frame;
}

@property (readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)drawAtContext:(id)arg1;
- (id)initWitColor:(id)arg1 frame:(struct CGRect)arg2;

@end

