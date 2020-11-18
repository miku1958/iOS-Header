//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColoringView.h>

#import <NanoTimeKitCompanion/NTKKeylineView-Protocol.h>

@class NSString, NTKKeylineTouchable, UIBezierPath, UIColor;

@interface _NTKKeylinePathView : NTKColoringView <NTKKeylineView>
{
    UIBezierPath *_path;
    UIBezierPath *_secondPath;
    NTKKeylineTouchable *touchable;
}

@property (strong, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *overrideColor;
@property (readonly) Class superclass;
@property (strong, nonatomic) NTKKeylineTouchable *touchable; // @synthesize touchable;
@property (nonatomic) BOOL usesLegibility;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 secondPath:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
