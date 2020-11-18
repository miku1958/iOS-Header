//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGSolidColorSource-Protocol.h>

@class NSArray, NSString;

@interface PXGPPTAnimationLayout : PXGLayout <PXGSolidColorSource>
{
    CDStruct_d97c9657 _updateFlags;
    NSArray *_colors;
    unsigned int _numberOfRows;
    unsigned int _numberOfColumns;
    long long _style;
}

@property (readonly, nonatomic) NSString *configurationDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property (nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateContent;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)init;
- (void)referenceSizeDidChange;
- (void)update;

@end
