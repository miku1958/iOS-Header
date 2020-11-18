//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MobileTimer/HandView-Protocol.h>

@class NSArray, NSString;

@interface BitmapHandView : UIView <HandView>
{
    NSArray *_partViews;
    NSArray *_partViewsMaintainingOrientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)partInfoWithName:(id)arg1;
+ (id)partInfoWithName:(id)arg1 offset:(struct CGPoint)arg2 maintainsOrientation:(BOOL)arg3;
- (void).cxx_destruct;
- (id)initWithBundle:(id)arg1 resourcePath:(id)arg2 partInfoList:(id)arg3 rotationalCenter:(struct CGPoint)arg4;
- (id)initWithImage:(id)arg1 rotationalCenter:(struct CGPoint)arg2;

@end
