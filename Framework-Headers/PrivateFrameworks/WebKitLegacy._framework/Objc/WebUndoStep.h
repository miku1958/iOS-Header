//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebUndoStep : NSObject
{
    struct RefPtr<WebCore::UndoStep> m_step;
}

+ (void)initialize;
+ (id)stepWithUndoStep:(PassRefPtr_f4b194ba)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finalize;
- (id)initWithUndoStep:(PassRefPtr_f4b194ba)arg1;
- (struct UndoStep *)step;

@end

