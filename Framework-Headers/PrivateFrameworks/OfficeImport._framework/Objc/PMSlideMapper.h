//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class PDSlide;

__attribute__((visibility("hidden")))
@interface PMSlideMapper : CMMapper
{
    PDSlide *mSlide;
    struct CGRect mRect;
}

- (void).cxx_destruct;
- (id)defaultTheme;
- (id)initWithPDSlide:(id)arg1 slideRect:(struct CGRect)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBackgroundAt:(id)arg1 recursive:(BOOL)arg2 withState:(id)arg3;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapMasterSlideAt:(id)arg1 withState:(id)arg2;
- (id)slideName;
- (struct CGRect)slideRect;
- (id)styleMatrix;

@end

