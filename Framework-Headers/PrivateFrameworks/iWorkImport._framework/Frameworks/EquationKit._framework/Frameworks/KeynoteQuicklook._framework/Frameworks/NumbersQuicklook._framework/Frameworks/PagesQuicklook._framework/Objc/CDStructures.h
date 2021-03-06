//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AllFootnoteSelectionArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
};

struct Arena;

struct ArenaStringPtr {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CachedSize {
    struct atomic<int> _field1;
};

struct CanvasSelectionArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct RepeatedPtrField<TSP::Reference> _field5;
    struct RepeatedPtrField<TSP::Reference> _field6;
    struct RepeatedPtrField<TSP::Reference> _field7;
    struct Range *_field8;
    struct Reference *_field9;
    int _field10;
    int _field11;
    int _field12;
};

struct DoublePoint;

struct DoubleSize;

struct FillArchive;

struct HasBits<1> {
    unsigned int _field1[1];
};

struct HasBits<2> {
    unsigned int _field1[2];
};

struct InternalMetadataWithArena {
    void *_field1;
};

struct LayoutStateArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct RepeatedPtrField<TP::SectionHintArchive> _field5;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    int _field12;
};

struct PageHintArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct RepeatedPtrField<TP::TargetHintArchive> _field5;
    struct RepeatedPtrField<TP::AnchorPosArchive> _field6;
    struct RepeatedPtrField<TSP::Reference> _field7;
    struct RepeatedPtrField<TSP::UUID> _field8;
    struct RepeatedPtrField<TSP::Reference> _field9;
    struct RepeatedPtrField<TP::TargetHintArchive> _field10;
    struct RepeatedPtrField<TP::TopicNumberHintsArchive> _field11;
    struct Range *_field12;
    struct Range *_field13;
    struct Reference *_field14;
    struct Reference *_field15;
    struct TopicNumberHintsArchive *_field16;
    int _field17;
    unsigned int _field18;
    unsigned int _field19;
    int _field20;
    unsigned int _field21;
    unsigned int _field22;
};

struct Point;

struct Range;

struct Reference;

struct Rep;

struct RepeatedPtrField<TP::AnchorPosArchive> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TP::PageHintArchive> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TP::SectionHintArchive> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TP::TargetHintArchive> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TP::TopicNumberEntryArchive> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TP::TopicNumberHintsArchive> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TSCH::ChartUIState> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TSP::Reference> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TSP::UUID> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<std::__1::basic_string<char>> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct SectionArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct RepeatedPtrField<TSP::Reference> _field5;
    struct RepeatedPtrField<TSP::Reference> _field6;
    struct RepeatedPtrField<TSP::Reference> _field7;
    struct ArenaStringPtr _field8;
    struct Reference *_field9;
    struct Reference *_field10;
    struct Reference *_field11;
    struct Reference *_field12;
    struct FillArchive *_field13;
    struct UUID *_field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    BOOL _field19;
    BOOL _field20;
    BOOL _field21;
    BOOL _field22;
    float _field23;
    float _field24;
    float _field25;
    float _field26;
    float _field27;
    float _field28;
    unsigned int _field29;
    unsigned int _field30;
    BOOL _field31;
    BOOL _field32;
    BOOL _field33;
    unsigned int _field34;
};

struct SectionHintArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct RepeatedPtrField<TP::PageHintArchive> _field5;
    unsigned int _field6;
};

struct SelectionPathArchive;

struct Size;

struct TPSectionEnumerator {
    id _field1;
    unsigned long long _field2;
    struct _NSRange _field3;
    struct _NSRange _field4;
};

struct TargetHintArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct Point *_field5;
    struct Size *_field6;
    struct Range *_field7;
    struct Range *_field8;
    struct DoublePoint *_field9;
    struct DoubleSize *_field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    BOOL _field14;
    BOOL _field15;
    BOOL _field16;
    BOOL _field17;
};

struct ThemeArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct ThemeArchive *_field5;
};

struct TopicNumberHintsArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct RepeatedPtrField<TP::TopicNumberEntryArchive> _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct UIStateArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<2> _field3;
    struct RepeatedPtrField<TSCH::ChartUIState> _field4;
    struct ArenaStringPtr _field5;
    struct ArenaStringPtr _field6;
    struct Point *_field7;
    struct Reference *_field8;
    struct Reference *_field9;
    struct Size *_field10;
    struct Point *_field11;
    struct Size *_field12;
    struct SelectionPathArchive *_field13;
    struct SelectionPathArchive *_field14;
    struct Reference *_field15;
    struct Reference *_field16;
    struct Reference *_field17;
    struct Reference *_field18;
    float _field19;
    BOOL _field20;
    BOOL _field21;
    BOOL _field22;
    BOOL _field23;
    int _field24;
    unsigned int _field25;
    float _field26;
    BOOL _field27;
    BOOL _field28;
    BOOL _field29;
    BOOL _field30;
    float _field31;
    int _field32;
    float _field33;
    BOOL _field34;
    BOOL _field35;
    BOOL _field36;
    float _field37;
    BOOL _field38;
    BOOL _field39;
    BOOL _field40;
    BOOL _field41;
    int _field42;
    BOOL _field43;
    BOOL _field44;
    struct CachedSize _field45;
};

struct UUID;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct atomic<int> {
    struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> {
        _Atomic int _field1;
    } _field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

struct pair<double, double> {
    double _field1;
    double _field2;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct pair<double, double> {
    double _field1;
    double _field2;
} pair_b2618ff2;

