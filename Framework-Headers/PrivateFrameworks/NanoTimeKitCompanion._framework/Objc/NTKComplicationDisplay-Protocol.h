//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@protocol NTKComplicationDisplayObserver;

@protocol NTKComplicationDisplay <NSObject>

@property (nonatomic) BOOL canUseCurvedText;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;


@optional
- (void)setEditing:(BOOL)arg1;
- (void)setMaxSize:(struct CGSize)arg1;
- (long long)tritiumUpdateMode;
@end

