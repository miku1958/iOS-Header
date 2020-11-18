//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GraphView, NFMLeashManager, UILabel;

@interface NFMHotterColderView : UIView
{
    BOOL _freshBuffer;
    NFMLeashManager *_leashManager;
    long long _bufferIndex;
    long long _miniBufferIndex;
    UIView *_papaBar;
    UIView *_mamaBar;
    UIView *_babyBar;
    UIView *_graphClippingView;
    GraphView *_graph;
    UILabel *_rssiStats;
}

@property (strong, nonatomic) UIView *babyBar; // @synthesize babyBar=_babyBar;
@property (nonatomic) long long bufferIndex; // @synthesize bufferIndex=_bufferIndex;
@property (nonatomic) BOOL freshBuffer; // @synthesize freshBuffer=_freshBuffer;
@property (strong, nonatomic) GraphView *graph; // @synthesize graph=_graph;
@property (strong, nonatomic) UIView *graphClippingView; // @synthesize graphClippingView=_graphClippingView;
@property (strong, nonatomic) NFMLeashManager *leashManager; // @synthesize leashManager=_leashManager;
@property (strong, nonatomic) UIView *mamaBar; // @synthesize mamaBar=_mamaBar;
@property (nonatomic) long long miniBufferIndex; // @synthesize miniBufferIndex=_miniBufferIndex;
@property (strong, nonatomic) UIView *papaBar; // @synthesize papaBar=_papaBar;
@property (strong, nonatomic) UILabel *rssiStats; // @synthesize rssiStats=_rssiStats;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)overrideService;

@end

