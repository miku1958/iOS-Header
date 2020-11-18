//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;
@protocol CNCancelable;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell
{
    BOOL _shouldUseMapTiles;
    UIImageView *_mapImageView;
    id<CNCancelable> _tileGeneratorToken;
}

@property (strong, nonatomic) UIImageView *mapImageView; // @synthesize mapImageView=_mapImageView;
@property (nonatomic) BOOL shouldUseMapTiles; // @synthesize shouldUseMapTiles=_shouldUseMapTiles;
@property (strong, nonatomic) id<CNCancelable> tileGeneratorToken; // @synthesize tileGeneratorToken=_tileGeneratorToken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setMapImage:(id)arg1;
- (void)setProperty:(id)arg1;
- (BOOL)supportsTintColorValue;
- (void)tapGesture:(id)arg1;
- (id)variableConstraints;

@end

