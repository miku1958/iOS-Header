//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OADDrawableCategoryDefaults;

__attribute__((visibility("hidden")))
@interface OADDrawableDefaults : NSObject
{
    OADDrawableCategoryDefaults *mShapeDefaults;
    OADDrawableCategoryDefaults *mLineDefaults;
    OADDrawableCategoryDefaults *mTextDefaults;
}

@property (strong, nonatomic) OADDrawableCategoryDefaults *lineDefaults; // @synthesize lineDefaults=mLineDefaults;
@property (strong, nonatomic) OADDrawableCategoryDefaults *shapeDefaults; // @synthesize shapeDefaults=mShapeDefaults;
@property (strong, nonatomic) OADDrawableCategoryDefaults *textDefaults; // @synthesize textDefaults=mTextDefaults;

- (void).cxx_destruct;
- (void)addDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (id)addTextDefaults;
- (id)description;
- (BOOL)isEmpty;

@end
