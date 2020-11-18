//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/NSCopying-Protocol.h>

@class AKPageController;

@interface AKFormFeature : NSObject <NSCopying>
{
    AKPageController *_page;
    struct CGRect _rect;
}

@property (weak, nonatomic) AKPageController *page; // @synthesize page=_page;
@property (nonatomic) struct CGRect rect; // @synthesize rect=_rect;

+ (id)featureWithRect:(struct CGRect)arg1 onPage:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithRect:(struct CGRect)arg1 onPage:(id)arg2;

@end

