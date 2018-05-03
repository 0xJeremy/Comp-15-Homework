
int64_t __gmon_start__ = 0;

void fun_401ea0();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_401ea0();
    }
    return;
}

int64_t __gmon_start__ = 0x401ea6;

void fun_401ea0() {
    goto __gmon_start__;
}

int64_t _ITM_deregisterTMCloneTable = 0;

int64_t deregister_tm_clones() {
    int64_t rax1;

    rax1 = 7;
    if (1 || (rax1 = _ITM_deregisterTMCloneTable, rax1 == 0)) {
        return rax1;
    } else {
        goto rax1;
    }
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(char const*) const */
int64_t _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareEPKc = 0x4020f6;

int32_t fun_4020f0(void** rdi, void** rsi, void** rdx) {
    goto _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareEPKc;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(unsigned long&, unsigned long) */
int64_t _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm = 0x401ef6;

void** fun_401ef0(void** rdi, void** rsi, ...) {
    goto _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm;
}

/* operator delete(void*) */
int64_t _ZdlPv = 0x401ec6;

void** fun_401ec0(void** rdi, ...) {
    goto _ZdlPv;
}

int64_t _Unwind_Resume = 0x402216;

void** fun_402210(void** rdi, void** rsi, ...) {
    goto _Unwind_Resume;
}

int64_t strlen = 0x401f96;

void** fun_401f90(void** rdi, void** rsi, void** rdx) {
    goto strlen;
}

struct s1 {
    void** f0;
    signed char[7] pad8;
    int64_t f8;
    void** f16;
};

struct s0 {
    void** f0;
    signed char[7] pad8;
    void** f8;
    signed char[31] pad40;
    void** f40;
    signed char[7] pad48;
    struct s1* f48;
    struct s1* f56;
};

/* FileMapper::getPaths() */
void** _ZN10FileMapper8getPathsEv(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9);

void fun_402240(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, ...);

/* Index::processFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void _ZN5Index11processFileENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(struct s0* rdi, void** rsi);

void** fun_4020d0(void** rdi, void** rsi, ...);

/* Index::query(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool) */
void** _ZN5Index5queryENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb(void** rdi, void** rsi, int32_t edx);

/* Index::stripNonAlphaNum(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN5Index16stripNonAlphaNumENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx);

void fun_402000(void** rdi, void** rsi, void** rdx);

void** fun_402020(void** rdi, void** rsi, void** rdx);

int64_t _ZSt4cout = 0;

void fun_401e80(void** rdi, void** rsi, void** rdx);

void fun_401ee0(void** rdi, void** rsi, void** rdx);

int64_t fun_402230(void** rdi, void** rsi, void** rdx);

void** fun_402070(int64_t rdi, void** rsi, void** rdx);

void** fun_402090(int64_t rdi, void** rsi, void** rdx);

/* Index::getIndexList(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN5Index12getIndexListENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx);

struct s2 {
    signed char[8] pad8;
    void** f8;
    signed char[7] pad16;
    void** f16;
    signed char[7] pad24;
    void** f24;
    signed char[7] pad32;
    void** f32;
    signed char[7] pad40;
    int64_t f40;
};

/* IndexList::sensitiveIndices(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
struct s2* _ZN9IndexList16sensitiveIndicesENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(struct s2* rdi, void** rsi, void** rdx);

/* IndexList::insensitiveIndices() */
void** _ZN9IndexList18insensitiveIndicesEv(void** rdi, void** rsi, void** rdx);

void** fun_401fe0(void** rdi, void** rsi, void** rdx, void** rcx);

/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_erase(std::_Rb_tree_node<int>*) */
void** _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(void** rdi, void** rsi, void** rdx);

/* Index::build() */
void** _ZN5Index5buildEv(struct s0* rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    struct s0* r13_7;
    void** rdi8;
    void** rax9;
    void** rsp10;
    void** r14_11;
    void** rdi12;
    void** r15_13;
    void** r12_14;
    void** v15;
    void** rbx16;
    void** rbp17;
    void** rax18;
    void** rax19;
    void** rax20;
    void*** rsp21;
    void** rsp22;
    void** r12_23;
    void** v24;
    void** r15_25;
    void** rbx26;
    void** rax27;
    void** rax28;
    void*** rsp29;
    void* rsp30;
    void** r15_31;
    void** r13_32;
    void** r12_33;
    void** r14_34;
    void** v35;
    void** rbx36;
    void** rbp37;
    void** rax38;
    void** rdx39;
    void* rsp40;
    void** v41;
    void** rbx42;
    void** rax43;
    void** rsi44;
    void** rdx45;
    void** rdi46;
    int64_t rax47;
    void** rbp48;
    void** rax49;
    signed char al50;
    void** rsi51;
    int64_t rax52;
    void** v53;
    void** rbp54;
    void** rax55;
    void** v56;
    void** v57;
    void** rbx58;
    int64_t rdi59;
    void** al60;
    void** rbx61;
    void** v62;
    int32_t v63;
    void** rax64;
    void** v65;
    void** rbp66;
    void** rax67;
    void** rdi68;
    void** rsi69;
    void** rax70;
    void** rsi71;
    void** rdx72;
    void** rdi73;
    int32_t eax74;
    int64_t rax75;
    void** rbx76;
    void** rax77;
    signed char al78;
    void** rsi79;
    int64_t rax80;
    void** rax81;
    void* rsp82;
    void** rbp83;
    void* rsp84;
    int32_t eax85;
    void** v86;
    void** rbp87;
    void** rax88;
    void** rdi89;
    void** rsi90;
    int64_t v91;
    void** v92;
    void** rax93;
    void** rdi94;
    void** rsi95;
    void** rax96;
    void** rsi97;
    void** rdi98;
    void* rsp99;
    int32_t eax100;
    int64_t rax101;
    void** rbx102;
    void** rax103;
    signed char al104;
    void** rsi105;
    int64_t rax106;
    void** r15_107;
    void** r14_108;
    void** v109;
    void** rcx110;
    void* rax111;
    void** rsi112;
    void** rax113;
    void* rsp114;
    void** rbp115;
    void** rax116;
    signed char al117;
    void** rsi118;
    int64_t rax119;
    void** rax120;
    void** v121;
    void** rbx122;
    void** rdi123;
    void** rbx124;

    r13_7 = rdi;
    rdi8 = r13_7->f0;
    rax9 = _ZN10FileMapper8getPathsEv(rdi8, rsi, rdx, rcx, r8, r9);
    rsp10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8);
    r14_11 = rax9;
    rdi12 = *reinterpret_cast<void***>(r14_11);
    if (rdi12 == *reinterpret_cast<void***>(r14_11 + 8)) {
        addr_404426_2:
        if (rdi12) {
            fun_401ec0(rdi12);
        }
    } else {
        r15_13 = rsp10 + 16;
        do {
            r12_14 = rdi12;
            v15 = r15_13;
            rbx16 = *reinterpret_cast<void***>(r12_14);
            rbp17 = *reinterpret_cast<void***>(r12_14 + 8);
            if (rbx16) 
                goto addr_40435e_6;
            if (rbp17) 
                goto addr_404447_8;
            addr_40435e_6:
            rax18 = r15_13;
            if (reinterpret_cast<unsigned char>(rbp17) >= reinterpret_cast<unsigned char>(16)) {
                *reinterpret_cast<int32_t*>(&rdx) = 0;
                rax18 = fun_401ef0(rsp10, rsp10 + 32);
                rsp10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp10 - 8) + 8);
                v15 = rax18;
                rcx = rbp17;
            }
            if (rbp17) {
                if (!reinterpret_cast<int1_t>(rbp17 == 1)) {
                    rdx = rbp17;
                    fun_402240(rax18, rbx16, rdx, rcx, r8);
                    rsp10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp10 - 8) + 8);
                } else {
                    *reinterpret_cast<void***>(rax18) = *reinterpret_cast<void***>(rbx16);
                }
            }
            rcx = v15;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp17)) = 0;
            rsi = rsp10;
            _ZN5Index11processFileENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(r13_7, rsi);
            rsp10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp10 - 8) + 8);
            if (v15 != r15_13) {
                fun_401ec0(v15);
                rsp10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp10 - 8) + 8);
            }
            rdi12 = r12_14 + 32;
        } while (rdi12 != *reinterpret_cast<void***>(r14_11 + 8));
        goto addr_4043e9_17;
    }
    rax19 = fun_401ec0(r14_11);
    return rax19;
    addr_404447_8:
    rax20 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
    rsp21 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp10 - 8) + 8);
    if (v15 != r15_13) {
        fun_401ec0(v15);
        rsp21 = rsp21 - 8 + 8;
    }
    fun_402210(rax20, rsi);
    rsp22 = reinterpret_cast<void**>(rsp21 - 8 + 8 - 8 - 8 - 8 - 8 - 40);
    r12_23 = rsp22 + 16;
    v24 = r12_23;
    r15_25 = *reinterpret_cast<void***>(rsi);
    rbx26 = *reinterpret_cast<void***>(rsi + 8);
    if (r15_25 || !rbx26) {
        if (reinterpret_cast<unsigned char>(rbx26) <= reinterpret_cast<unsigned char>(15)) {
            rax27 = r12_23;
        } else {
            rax27 = fun_401ef0(rsp22, rsp22 + 32);
            rsp22 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp22 - 8) + 8);
            v24 = rax27;
            rcx = rbx26;
        }
        if (rbx26) {
            if (!reinterpret_cast<int1_t>(rbx26 == 1)) {
                fun_402240(rax27, r15_25, rbx26, rcx, r8);
                rsp22 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp22 - 8) + 8);
            } else {
                *reinterpret_cast<void***>(rax27) = *reinterpret_cast<void***>(r15_25);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<unsigned char>(rbx26)) = 0;
        _ZN5Index5queryENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb(rax20, rsp22, 0);
        if (v24 != r12_23) {
            fun_401ec0(v24, v24);
        }
        goto v15;
    }
    rax28 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
    rsp29 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp22 - 8) + 8);
    if (v24 != r12_23) {
        fun_401ec0(v24);
        rsp29 = rsp29 - 8 + 8;
    }
    fun_402210(rax28, rsi);
    rsp30 = reinterpret_cast<void*>(rsp29 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x148);
    *reinterpret_cast<int32_t*>(&r15_31) = *reinterpret_cast<int32_t*>(&rdx);
    *reinterpret_cast<int32_t*>(&r15_31 + 4) = 0;
    r13_32 = rsi;
    r12_33 = rax28;
    r14_34 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0x108);
    v35 = r14_34;
    rbx36 = *reinterpret_cast<void***>(r13_32);
    rbp37 = *reinterpret_cast<void***>(r13_32 + 8);
    if (rbx36) 
        goto addr_404590_36;
    if (rbp37) 
        goto addr_404d27_38;
    addr_404590_36:
    if (reinterpret_cast<unsigned char>(rbp37) <= reinterpret_cast<unsigned char>(15)) {
        rax38 = r14_34;
    } else {
        rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0x138);
        rax38 = fun_401ef0(reinterpret_cast<uint64_t>(rsp30) + 0xf8, rsi);
        rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
        v35 = rax38;
        rcx = rbp37;
    }
    if (rbp37) {
        if (!reinterpret_cast<int1_t>(rbp37 == 1)) {
            rsi = rbx36;
            fun_402240(rax38, rsi, rbp37, rcx, r8);
            rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
        } else {
            *reinterpret_cast<void***>(rax38) = *reinterpret_cast<void***>(rbx36);
        }
    }
    rcx = v35;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp37)) = 0;
    rdx39 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0xf8);
    _ZN5Index16stripNonAlphaNumENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<uint64_t>(rsp30) + 0x118, rsi, rdx39);
    rsp40 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
    rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp40) + 0x118);
    fun_402000(r13_32, rsi, rdx39);
    rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp40) - 8 + 8);
    if (v41 != reinterpret_cast<uint64_t>(rsp30) + 0x128) {
        fun_401ec0(v41, v41);
        rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
    }
    if (v35 != r14_34) {
        fun_401ec0(v35, v35);
        rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
    }
    rbx36 = *reinterpret_cast<void***>(r13_32 + 8);
    if (rbx36) 
        goto addr_404667_50;
    rbx42 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0xe8);
    rax43 = fun_402020(0x60b560, rbx42, 2);
    *reinterpret_cast<int32_t*>(&rsi44) = reinterpret_cast<int32_t>(" Not Found.");
    *reinterpret_cast<int32_t*>(&rsi44 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx45) = 11;
    *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
    rdi46 = rax43;
    fun_402020(rdi46, " Not Found.", 11);
    if (!*reinterpret_cast<signed char*>(&r15_31)) {
        *reinterpret_cast<int32_t*>(&rdi46) = 0x60b560;
        *reinterpret_cast<int32_t*>(&rdi46 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi44) = reinterpret_cast<int32_t>(" Try with @insensitive or @i.");
        *reinterpret_cast<int32_t*>(&rsi44 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx45) = 29;
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        fun_402020(0x60b560, " Try with @insensitive or @i.", 29);
    }
    rax47 = _ZSt4cout;
    rbp48 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax47 - 24) + 0x60b650);
    if (!rbp48) {
        fun_401e80(rdi46, rsi44, rdx45);
    }
    if (!*reinterpret_cast<void***>(rbp48 + 56)) {
        fun_401ee0(rbp48, rsi44, rdx45);
        rax49 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbp48) + 48);
        al50 = reinterpret_cast<signed char>(rax49(rbp48, 10, rdx45));
    } else {
        al50 = *reinterpret_cast<signed char*>(rbp48 + 67);
    }
    *reinterpret_cast<int32_t*>(&rsi51) = al50;
    *reinterpret_cast<int32_t*>(&rsi51 + 4) = 0;
    rax52 = fun_402230(0x60b560, rsi51, rdx45);
    fun_402070(rax52, rsi51, rdx45);
    if (rbx42 != rbx42) {
        fun_401ec0(rbx42, rbx42);
    }
    addr_404cfb_60:
    goto v24;
    addr_404667_50:
    r14_34 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0xa8);
    v53 = r14_34;
    rbp54 = *reinterpret_cast<void***>(r13_32);
    if (!rbp54) 
        goto addr_404d27_38;
    if (reinterpret_cast<unsigned char>(rbx36) <= reinterpret_cast<unsigned char>(15)) {
        rax55 = r14_34;
    } else {
        rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0x138);
        *reinterpret_cast<int32_t*>(&rdx39) = 0;
        *reinterpret_cast<int32_t*>(&rdx39 + 4) = 0;
        rax55 = fun_401ef0(reinterpret_cast<uint64_t>(rsp30) + 0x98, rsi);
        rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
        v53 = rax55;
        rcx = rbx36;
        v56 = rcx;
    }
    if (!reinterpret_cast<int1_t>(rbx36 == 1)) {
        rsi = rbp54;
        rdx39 = rbx36;
        fun_402240(rax55, rsi, rdx39, rcx, r8);
        rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
    } else {
        *reinterpret_cast<void***>(rax55) = *reinterpret_cast<void***>(rbp54);
    }
    v57 = rbx36;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v53) + reinterpret_cast<unsigned char>(rbx36)) = 0;
    rbx58 = v53;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v57) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v57 == 0)) {
        rcx = rbx58;
    } else {
        do {
            *reinterpret_cast<int32_t*>(&rdi59) = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx58));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi59) + 4) = 0;
            al60 = fun_402090(rdi59, rsi, rdx39);
            rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
            *reinterpret_cast<void***>(rbx58) = al60;
            ++rbx58;
            rcx = v53;
            rdx39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(v57));
        } while (reinterpret_cast<unsigned char>(rbx58) < reinterpret_cast<unsigned char>(rdx39));
    }
    rbx61 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0xc8);
    v62 = rbx61;
    if (rcx == r14_34) {
        v63 = *reinterpret_cast<int32_t*>(&r15_31);
        __asm__("movups xmm0, [r14]");
        __asm__("movups [rbx], xmm0");
    } else {
        v63 = *reinterpret_cast<int32_t*>(&r15_31);
        v62 = rcx;
        rcx = v56;
    }
    rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0xb8);
    rax64 = _ZN5Index12getIndexListENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(r12_33, rsi, rdx39);
    rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
    r15_31 = rax64;
    if (v62 != rbx61) {
        fun_401ec0(v62, v62);
        rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
    }
    if (r14_34 != r14_34) {
        fun_401ec0(r14_34, r14_34);
        rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
    }
    if (r15_31) 
        goto addr_40488b_80;
    r15_31 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0x88);
    v65 = r15_31;
    rbx36 = *reinterpret_cast<void***>(r13_32);
    rbp66 = *reinterpret_cast<void***>(r13_32 + 8);
    if (rbx36 || !rbp66) {
        if (reinterpret_cast<unsigned char>(rbp66) <= reinterpret_cast<unsigned char>(15)) {
            rax67 = r15_31;
        } else {
            rdi68 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0x78);
            rsi69 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0x138);
            rax67 = fun_401ef0(rdi68, rsi69, rdi68, rsi69);
            v65 = rax67;
            rcx = rbp66;
        }
        if (rbp66) {
            if (!reinterpret_cast<int1_t>(rbp66 == 1)) {
                fun_402240(rax67, rbx36, rbp66, rcx, r8, rax67, rbx36, rbp66, rcx, r8);
            } else {
                *reinterpret_cast<void***>(rax67) = *reinterpret_cast<void***>(rbx36);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(rbp66)) = 0;
        rax70 = fun_402020(0x60b560, v65, rbp66);
        *reinterpret_cast<int32_t*>(&rsi71) = reinterpret_cast<int32_t>(" Not Found.");
        *reinterpret_cast<int32_t*>(&rsi71 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx72) = 11;
        *reinterpret_cast<int32_t*>(&rdx72 + 4) = 0;
        rdi73 = rax70;
        fun_402020(rdi73, " Not Found.", 11);
        eax74 = v63;
        if (!*reinterpret_cast<signed char*>(&eax74)) {
            *reinterpret_cast<int32_t*>(&rdi73) = 0x60b560;
            *reinterpret_cast<int32_t*>(&rdi73 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi71) = reinterpret_cast<int32_t>(" Try with @insensitive or @i.");
            *reinterpret_cast<int32_t*>(&rsi71 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx72) = 29;
            *reinterpret_cast<int32_t*>(&rdx72 + 4) = 0;
            fun_402020(0x60b560, " Try with @insensitive or @i.", 29);
        }
        rax75 = _ZSt4cout;
        rbx76 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax75 - 24) + 0x60b650);
        if (!rbx76) {
            fun_401e80(rdi73, rsi71, rdx72);
        }
        if (!*reinterpret_cast<void***>(rbx76 + 56)) {
            fun_401ee0(rbx76, rsi71, rdx72);
            rax77 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx76) + 48);
            al78 = reinterpret_cast<signed char>(rax77(rbx76, 10, rdx72));
        } else {
            al78 = *reinterpret_cast<signed char*>(rbx76 + 67);
        }
        *reinterpret_cast<int32_t*>(&rsi79) = al78;
        *reinterpret_cast<int32_t*>(&rsi79 + 4) = 0;
        rax80 = fun_402230(0x60b560, rsi79, rdx72);
        fun_402070(rax80, rsi79, rdx72);
        if (v65 != r15_31) {
            fun_401ec0(v65, v65);
            goto addr_404cfb_60;
        }
    } else {
        addr_404d27_38:
        rax81 = fun_4020d0("basic_string::_M_construct null not valid", rsi, "basic_string::_M_construct null not valid", rsi);
        rsp82 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
        rbp83 = rax81;
    }
    if (v35 != r14_34) {
        fun_401ec0(v35, v35);
        rsp82 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp82) - 8 + 8);
    }
    fun_402210(rbp83, rsi, rbp83, rsi);
    rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp82) - 8 + 8);
    goto addr_404dac_101;
    addr_40488b_80:
    eax85 = v63;
    if (!*reinterpret_cast<signed char*>(&eax85)) {
        r14_34 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 56);
        v86 = r14_34;
        rbx36 = *reinterpret_cast<void***>(r13_32);
        rbp87 = *reinterpret_cast<void***>(r13_32 + 8);
        if (rbx36) 
            goto addr_404928_103;
        if (rbp87) 
            goto addr_404d27_38;
        addr_404928_103:
        if (reinterpret_cast<unsigned char>(rbp87) <= reinterpret_cast<unsigned char>(15)) {
            rax88 = r14_34;
        } else {
            rdi89 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 40);
            rsi90 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 0x138);
            rax88 = fun_401ef0(rdi89, rsi90, rdi89, rsi90);
            rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
            v86 = rax88;
            rcx = rbp87;
        }
        if (rbp87) {
            if (!reinterpret_cast<int1_t>(rbp87 == 1)) {
                fun_402240(rax88, rbx36, rbp87, rcx, r8, rax88, rbx36, rbp87, rcx, r8);
                rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax88) = *reinterpret_cast<void***>(rbx36);
            }
        }
        rcx = v86;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp87)) = 0;
        rdx39 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp30) + 40);
        rsi = r15_31;
        _ZN9IndexList16sensitiveIndicesENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<uint64_t>(rsp30) + 72, rsi, rdx39);
        rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
        if (v86 != r14_34) {
            fun_401ec0(v86, v86);
            rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp84) - 8 + 8);
        }
    } else {
        rsi = r15_31;
        _ZN9IndexList18insensitiveIndicesEv(reinterpret_cast<uint64_t>(rsp30) + 72, rsi, rdx39);
        rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
    }
    if (!v91) {
        r15_31 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp84) + 24);
        v92 = r15_31;
        rbx36 = *reinterpret_cast<void***>(r13_32);
        rbp83 = *reinterpret_cast<void***>(r13_32 + 8);
        if (rbx36 || !rbp83) {
            addr_404bd9_116:
            if (reinterpret_cast<unsigned char>(rbp83) <= reinterpret_cast<unsigned char>(15)) {
                rax93 = r15_31;
            } else {
                rdi94 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp84) + 8);
                rsi95 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp84) + 0x140);
                rax93 = fun_401ef0(rdi94, rsi95, rdi94, rsi95);
                rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp84) - 8 + 8);
                v92 = rax93;
                rcx = rbp83;
            }
        } else {
            addr_404dac_101:
            fun_4020d0("basic_string::_M_construct null not valid", rsi, "basic_string::_M_construct null not valid", rsi);
            rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp84) - 8 + 8);
            goto addr_404bd9_116;
        }
        if (rbp83) {
            if (!reinterpret_cast<int1_t>(rbp83 == 1)) {
                fun_402240(rax93, rbx36, rbp83, rcx, r8, rax93, rbx36, rbp83, rcx, r8);
                rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp84) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax93) = *reinterpret_cast<void***>(rbx36);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v92) + reinterpret_cast<unsigned char>(rbp83)) = 0;
        rax96 = fun_402020(0x60b560, v92, rbp83);
        *reinterpret_cast<int32_t*>(&rsi97) = reinterpret_cast<int32_t>(" Not Found.");
        *reinterpret_cast<int32_t*>(&rsi97 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx39) = 11;
        *reinterpret_cast<int32_t*>(&rdx39 + 4) = 0;
        rdi98 = rax96;
        fun_402020(rdi98, " Not Found.", 11);
        rsp99 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp84) - 8 + 8 - 8 + 8);
        eax100 = v63;
        if (!*reinterpret_cast<signed char*>(&eax100)) {
            *reinterpret_cast<int32_t*>(&rdi98) = 0x60b560;
            *reinterpret_cast<int32_t*>(&rdi98 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi97) = reinterpret_cast<int32_t>(" Try with @insensitive or @i.");
            *reinterpret_cast<int32_t*>(&rsi97 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx39) = 29;
            *reinterpret_cast<int32_t*>(&rdx39 + 4) = 0;
            fun_402020(0x60b560, " Try with @insensitive or @i.", 29);
            rsp99 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp99) - 8 + 8);
        }
        rax101 = _ZSt4cout;
        rbx102 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax101 - 24) + 0x60b650);
        if (!rbx102) {
            fun_401e80(rdi98, rsi97, rdx39);
            rsp99 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp99) - 8 + 8);
        }
        if (!*reinterpret_cast<void***>(rbx102 + 56)) {
            fun_401ee0(rbx102, rsi97, rdx39);
            rax103 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx102) + 48);
            al104 = reinterpret_cast<signed char>(rax103(rbx102, 10, rdx39));
            rsp99 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp99) - 8 + 8 - 8 + 8);
        } else {
            al104 = *reinterpret_cast<signed char*>(rbx102 + 67);
        }
        *reinterpret_cast<int32_t*>(&rsi105) = al104;
        *reinterpret_cast<int32_t*>(&rsi105 + 4) = 0;
        rax106 = fun_402230(0x60b560, rsi105, rdx39);
        fun_402070(rax106, rsi105, rdx39);
        rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp99) - 8 + 8 - 8 + 8);
        if (v92 != r15_31) {
            fun_401ec0(v92, v92);
            rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp84) - 8 + 8);
        }
    } else {
        r15_107 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp84) + 80);
        r14_108 = v109;
        while (r14_108 != r15_107) {
            rcx110 = *reinterpret_cast<void***>(r12_33 + 40);
            rax111 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r14_108 + 32)))) << 5);
            rsi112 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx110) + reinterpret_cast<uint64_t>(rax111));
            rdx39 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx110) + reinterpret_cast<uint64_t>(rax111) + 8);
            rax113 = fun_402020(0x60b560, rsi112, rdx39);
            rsp114 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp84) - 8 + 8);
            rbp115 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax113) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(*reinterpret_cast<void***>(rax113) + 0xffffffffffffffe8)) + 0xf0);
            if (!rbp115) {
                fun_401e80(0x60b560, rsi112, rdx39);
                rsp114 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp114) - 8 + 8);
            }
            if (!*reinterpret_cast<void***>(rbp115 + 56)) {
                fun_401ee0(rbp115, rsi112, rdx39);
                rax116 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbp115) + 48);
                al117 = reinterpret_cast<signed char>(rax116(rbp115, 10, rdx39));
                rsp114 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp114) - 8 + 8 - 8 + 8);
            } else {
                al117 = *reinterpret_cast<signed char*>(rbp115 + 67);
            }
            *reinterpret_cast<int32_t*>(&rsi118) = al117;
            *reinterpret_cast<int32_t*>(&rsi118 + 4) = 0;
            rax119 = fun_402230(rax113, rsi118, rdx39);
            fun_402070(rax119, rsi118, rdx39);
            rax120 = fun_401fe0(r14_108, rsi118, rdx39, rcx110);
            rsp84 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp114) - 8 + 8 - 8 + 8 - 8 + 8);
            r14_108 = rax120;
        }
    }
    _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(reinterpret_cast<uint64_t>(rsp84) + 72, v121, rdx39);
    goto addr_404cfb_60;
    addr_4043e9_17:
    rbx122 = *reinterpret_cast<void***>(r14_11);
    if (rbx122 == rdi12) {
        rdi12 = rbx122;
        goto addr_404426_2;
    } else {
        do {
            rdi123 = *reinterpret_cast<void***>(rbx122);
            rbx124 = rbx122 + 16;
            if (rdi123 != rbx124) {
                fun_401ec0(rdi123);
            }
            rbx122 = rbx124 + 16;
        } while (rbx124 + 0xfffffffffffffff0 != r12_14);
        rdi12 = *reinterpret_cast<void***>(r14_11);
        goto addr_404426_2;
    }
}

void fun_4021d0(void** rdi, void** rsi, void** rdx);

int64_t _ZSt3cin = 0;

/* Index::query(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN5Index5queryENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, int32_t edx);

struct s3 {
    void** f0;
    signed char[7] pad8;
    void** f8;
    signed char[47] pad56;
    int64_t f56;
};

/* Index::Index(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN5IndexC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(struct s3* rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9);

struct s4 {
    void** f0;
    signed char[7] pad8;
    void*** f8;
    signed char[24] pad40;
    void** f40;
    signed char[7] pad48;
    void** f48;
};

/* Index::~Index() */
void _ZN5IndexD1Ev(struct s4* rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9, int64_t a7);

/* commandLoop(Index&) */
void** _Z11commandLoopR5Index(void** rdi, void** rsi, void** rdx) {
    void* rsp4;
    void** r14_5;
    void** r15_6;
    void** r13_7;
    void** rdx8;
    void** rsi9;
    int64_t rax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    void* rsp14;
    int32_t eax15;
    void* rsp16;
    void** v17;
    void** rax18;
    void** rcx19;
    void** r8_20;
    void** rdi21;
    void** rax22;
    void** v23;
    void** rax24;
    void** r8_25;
    void** rdi26;
    int64_t rax27;
    int64_t rax28;
    void** rbx29;
    void** rax30;
    signed char al31;
    void** rsi32;
    int64_t rax33;
    void** rax34;
    void** rbp35;
    void** rax36;
    signed char al37;
    void** rsi38;
    int64_t rax39;
    void** rax40;
    void* rsp41;
    void* rsp42;
    int64_t rax43;
    void** rax44;
    signed char al45;
    void** rsi46;
    int64_t rax47;
    int64_t rax48;
    void** rax49;
    signed char al50;
    void** rsi51;
    int64_t rax52;
    void** v53;
    void* rsp54;
    void** rax55;
    void** v56;
    void** rax57;
    void** r8_58;
    void** rsi59;
    void** r8_60;
    int64_t r9_61;
    void* rsp62;
    void** r8_63;
    int64_t r9_64;
    void* rsp65;
    void** r8_66;
    int64_t r9_67;
    int64_t v68;
    int64_t v69;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x78);
    r14_5 = rdi;
    r15_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 88);
    r13_7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 72);
    do {
        *reinterpret_cast<int32_t*>(&rdx8) = 7;
        *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
        fun_402020(0x60b560, "Query? ", 7);
        rsi9 = r13_7;
        fun_4021d0(0x60b240, rsi9, 7);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8);
        rax10 = _ZSt3cin;
        if (*reinterpret_cast<unsigned char*>(*reinterpret_cast<int64_t*>(rax10 - 24) + 0x60b260) & 2) 
            break;
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("@q");
        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
        eax11 = fun_4020f0(r13_7, "@q", 7);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        if (!eax11) 
            break;
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("@quit");
        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
        eax12 = fun_4020f0(r13_7, "@quit", 7);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        if (!eax12) 
            break;
        eax13 = fun_4020f0(r13_7, "@i", 7);
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        if (!eax13 || (eax15 = fun_4020f0(r13_7, "@insensitive", 7), rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8), eax15 == 0)) {
            fun_4021d0(0x60b240, r13_7, 7);
            rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
            v17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 56);
            if (!r15_6 && 0) {
                fun_4020d0("basic_string::_M_construct null not valid", r13_7, "basic_string::_M_construct null not valid", r13_7);
                rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
            }
            rax18 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 56);
            if (!1) {
                rax18 = fun_401ef0(reinterpret_cast<int64_t>(rsp16) + 40, reinterpret_cast<int64_t>(rsp16) + 0x68);
                rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
                v17 = rax18;
                rcx19 = reinterpret_cast<void**>(0);
            }
            if (!1) {
                if (1) {
                    fun_402240(rax18, r15_6, 0, rcx19, r8_20);
                    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax18) = reinterpret_cast<void**>(0);
                }
            }
            rcx19 = v17;
            *reinterpret_cast<void***>(rcx19) = reinterpret_cast<void**>(0);
            *reinterpret_cast<int32_t*>(&rdx8) = 1;
            *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
            rsi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 40);
            _ZN5Index5queryENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb(r14_5, rsi9, 1);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
            rdi21 = v17;
            rax22 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 56);
        } else {
            v23 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp14) + 24);
            if (!r15_6 && 0) {
                fun_4020d0("basic_string::_M_construct null not valid", "@insensitive", "basic_string::_M_construct null not valid", "@insensitive");
                rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
            }
            rax24 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp14) + 24);
            if (!1) {
                *reinterpret_cast<int32_t*>(&rdx8) = 0;
                *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
                rax24 = fun_401ef0(reinterpret_cast<int64_t>(rsp14) + 8, reinterpret_cast<int64_t>(rsp14) + 0x70);
                rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
                v23 = rax24;
                rcx19 = reinterpret_cast<void**>(0);
            }
            if (!1) {
                if (1) {
                    rdx8 = reinterpret_cast<void**>(0);
                    fun_402240(rax24, r15_6, 0, rcx19, r8_25);
                    rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax24) = reinterpret_cast<void**>(0);
                }
            }
            rcx19 = v23;
            *reinterpret_cast<void***>(rcx19) = reinterpret_cast<void**>(0);
            rsi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp14) + 8);
            _ZN5Index5queryENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(r14_5, rsi9, *reinterpret_cast<int32_t*>(&rdx8));
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
            rdi21 = v23;
            rax22 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 24);
        }
        if (rdi21 != rax22) {
            fun_401ec0(rdi21, rdi21);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        }
        rdi26 = r15_6;
        if (rdi26 != r15_6) {
            fun_401ec0(rdi26, rdi26);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        }
        rax27 = _ZSt3cin;
    } while (!(*reinterpret_cast<unsigned char*>(*reinterpret_cast<int64_t*>(rax27 - 24) + 0x60b260) & 2));
    goto addr_402649_29;
    rdi26 = r15_6;
    if (rdi26 != r15_6) {
        fun_401ec0(rdi26, rdi26);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    }
    addr_402680_32:
    rax28 = _ZSt4cout;
    rbx29 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax28 - 24) + 0x60b650);
    if (rbx29) {
        if (!*reinterpret_cast<void***>(rbx29 + 56)) {
            fun_401ee0(rbx29, rsi9, rdx8);
            rax30 = *reinterpret_cast<void***>(rbx29);
            al31 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax30 + 48)(rbx29, 10, rdx8));
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8);
        } else {
            al31 = *reinterpret_cast<signed char*>(rbx29 + 67);
        }
        *reinterpret_cast<int32_t*>(&rsi32) = al31;
        *reinterpret_cast<int32_t*>(&rsi32 + 4) = 0;
        rax33 = fun_402230(0x60b560, rsi32, rdx8);
        rax34 = fun_402070(rax33, rsi32, rdx8);
        rbx29 = rax34;
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("Goodbye! Thank you and have a nice day.");
        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx8) = 39;
        *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
        rdi26 = rbx29;
        fun_402020(rdi26, "Goodbye! Thank you and have a nice day.", 39);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8 - 8 + 8);
        rbp35 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx29) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(*reinterpret_cast<void***>(rbx29) + 0xffffffffffffffe8)) + 0xf0);
        if (rbp35) {
            if (!*reinterpret_cast<void***>(rbp35 + 56)) {
                fun_401ee0(rbp35, "Goodbye! Thank you and have a nice day.", 39);
                rax36 = *reinterpret_cast<void***>(rbp35);
                al37 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax36 + 48)(rbp35, 10, 39));
            } else {
                al37 = *reinterpret_cast<signed char*>(rbp35 + 67);
            }
            *reinterpret_cast<int32_t*>(&rsi38) = al37;
            *reinterpret_cast<int32_t*>(&rsi38 + 4) = 0;
            rax39 = fun_402230(rbx29, rsi38, 39);
            rax40 = fun_402070(rax39, rsi38, 39);
            return rax40;
        }
    }
    fun_401e80(rdi26, rsi9, rdx8);
    rsp41 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 - 8 - 8 - 0x70);
    if (*reinterpret_cast<int32_t*>(&rdi26) != 2) {
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("Usage:  gerp directory");
        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx8) = 22;
        *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
        fun_402020(0x60b560, "Usage:  gerp directory", 22);
        rsp42 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp41) - 8 + 8);
        rax43 = _ZSt4cout;
        rbx29 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax43 - 24) + 0x60b650);
        if (!rbx29) {
            addr_4028c4_43:
            fun_401e80(0x60b560, rsi9, rdx8);
            rsp41 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp42) - 8 + 8);
            goto addr_4028c9_44;
        } else {
            if (!*reinterpret_cast<void***>(rbx29 + 56)) {
                fun_401ee0(rbx29, "Usage:  gerp directory", 22);
                rax44 = *reinterpret_cast<void***>(rbx29);
                al45 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax44 + 48)(rbx29, 10, 22));
                rsp42 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp42) - 8 + 8 - 8 + 8);
            } else {
                al45 = *reinterpret_cast<signed char*>(rbx29 + 67);
            }
            *reinterpret_cast<int32_t*>(&rsi46) = al45;
            *reinterpret_cast<int32_t*>(&rsi46 + 4) = 0;
            rax47 = fun_402230(0x60b560, rsi46, 22);
            fun_402070(rax47, rsi46, 22);
            *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("            where:  directory is a valid directory");
            *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx8) = 50;
            *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
            fun_402020(0x60b560, "            where:  directory is a valid directory", 50);
            rsp42 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp42) - 8 + 8 - 8 + 8 - 8 + 8);
            rax48 = _ZSt4cout;
            rbx29 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax48 - 24) + 0x60b650);
            if (!rbx29) 
                goto addr_4028c4_43;
        }
        if (!*reinterpret_cast<void***>(rbx29 + 56)) {
            fun_401ee0(rbx29, "            where:  directory is a valid directory", 50);
            rax49 = *reinterpret_cast<void***>(rbx29);
            al50 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax49 + 48)(rbx29, 10, 50));
        } else {
            al50 = *reinterpret_cast<signed char*>(rbx29 + 67);
        }
        *reinterpret_cast<int32_t*>(&rsi51) = al50;
        *reinterpret_cast<int32_t*>(&rsi51 + 4) = 0;
        rax52 = fun_402230(0x60b560, rsi51, 50);
        fun_402070(rax52, rsi51, 50);
    } else {
        r14_5 = reinterpret_cast<void**>(0);
        r15_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp41) + 24);
        v53 = r15_6;
        if (1) {
            addr_4028c9_44:
            fun_4020d0("basic_string::_M_construct null not valid", rsi9, "basic_string::_M_construct null not valid", rsi9);
            rsp54 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp41) - 8 + 8);
            goto addr_4028d3_54;
        } else {
            rax55 = fun_401f90(0, rsi9, rdx8);
            rsp54 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp41) - 8 + 8);
            rbx29 = rax55;
            v56 = rbx29;
            if (reinterpret_cast<unsigned char>(rbx29) <= reinterpret_cast<unsigned char>(15)) {
                addr_4028d3_54:
                rax57 = r15_6;
            } else {
                *reinterpret_cast<int32_t*>(&rdx8) = 0;
                *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
                rax57 = fun_401ef0(reinterpret_cast<int64_t>(rsp54) + 8, reinterpret_cast<int64_t>(rsp54) + 0x68);
                rsp54 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp54) - 8 + 8);
                v53 = rax57;
                rcx19 = v56;
            }
            if (rbx29) {
                if (!reinterpret_cast<int1_t>(rbx29 == 1)) {
                    rdx8 = rbx29;
                    fun_402240(rax57, r14_5, rdx8, rcx19, r8_58);
                    rsp54 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp54) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax57) = *reinterpret_cast<void***>(r14_5);
                }
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v53) + reinterpret_cast<unsigned char>(v56)) = 0;
            rsi59 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp54) + 8);
            _ZN5IndexC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<int64_t>(rsp54) + 40, rsi59, rdx8, v53, r8_60, r9_61);
            rsp62 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp54) - 8 + 8);
            if (v53 != r15_6) {
                fun_401ec0(v53, v53);
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp62) - 8 + 8);
            }
            _ZN5Index5buildEv(reinterpret_cast<int64_t>(rsp62) + 40, rsi59, rdx8, v53, r8_63, r9_64);
            rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp62) - 8 + 8);
            _Z11commandLoopR5Index(reinterpret_cast<int64_t>(rsp65) + 40, rsi59, rdx8);
            _ZN5IndexD1Ev(reinterpret_cast<int64_t>(rsp65) - 8 + 8 + 40, rsi59, rdx8, v53, r8_66, r9_67, v68);
        }
    }
    goto v69;
    addr_402649_29:
    goto addr_402680_32;
}

/* FSTree::~FSTree() */
void** _ZN6FSTreeD1Ev(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9, int64_t a7);

struct s5 {
    void*** f0;
    signed char[8] pad16;
    uint64_t f16;
};

/* IndexList::~IndexList() */
void _ZN9IndexListD1Ev(void** rdi);

/* operator delete[](void*) */
int64_t _ZdaPv = 0x402116;

/* Index::~Index() */
void _ZN5IndexD1Ev(struct s4* rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9, int64_t a7) {
    struct s4* r14_8;
    void** rbx9;
    void** rdi10;
    int64_t rbx11;
    void** rbx12;
    void** r15_13;
    void** rdi14;
    void** rbx15;
    struct s5* r14_16;
    void*** rdi17;
    uint64_t rax18;
    uint64_t rbx19;
    void** r15_20;

    r14_8 = rdi;
    rbx9 = r14_8->f0;
    if (rbx9) {
        rdi10 = *reinterpret_cast<void***>(rbx9 + 8);
        if (rdi10 != rbx9 + 24) {
            fun_401ec0(rdi10);
        }
        _ZN6FSTreeD1Ev(rbx9, rsi, rdx, rcx, r8, r9, rbx11);
        fun_401ec0(rbx9);
    }
    rbx12 = r14_8->f40;
    r15_13 = r14_8->f48;
    if (rbx12 != r15_13) {
        do {
            rdi14 = *reinterpret_cast<void***>(rbx12);
            rbx15 = rbx12 + 16;
            if (rdi14 != rbx15) {
                fun_401ec0(rdi14);
            }
            rbx12 = rbx15 + 16;
        } while (rbx12 != r15_13);
        rbx12 = r14_8->f40;
    }
    if (rbx12) {
        fun_401ec0(rbx12);
    }
    r14_16 = reinterpret_cast<struct s5*>(&r14_8->f8);
    rdi17 = r14_16->f0;
    rax18 = r14_16->f16;
    *reinterpret_cast<int32_t*>(&rbx19) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx19) + 4) = 0;
    if (rax18) {
        do {
            r15_20 = rdi17[rbx19 * 8];
            if (r15_20) {
                _ZN9IndexListD1Ev(r15_20);
                fun_401ec0(r15_20);
                rdi17 = r14_16->f0;
                rax18 = r14_16->f16;
            }
            ++rbx19;
        } while (rbx19 < rax18);
    }
    if (!rdi17) {
        return;
    } else {
        goto _ZdaPv;
    }
}

struct s6 {
    void** f0;
    signed char[7] pad8;
    void** f8;
    signed char[7] pad16;
    void** f16;
};

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(char const*, unsigned long) */
int64_t _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm = 0x402146;

struct s6* fun_402140(void** rdi, void** rsi, void** rdx) {
    goto _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
int64_t _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_ = 0x401fc6;

void** fun_401fc0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_;
}

/* burner(DirNode*) */
void _Z6burnerP7DirNode(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9, void** a7);

/* FSTree::~FSTree() */
void** _ZN6FSTreeD1Ev(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9, int64_t a7) {
    void** rdi8;
    void** rax9;

    rdi8 = *reinterpret_cast<void***>(rdi);
    _Z6burnerP7DirNode(rdi8, rsi, rdx, rcx, r8, r9, rax9);
    return rax9;
}

/* FSTree::get_root() const */
void** _ZNK6FSTree8get_rootEv(void** rdi) {
    return *reinterpret_cast<void***>(rdi);
}

/* operator new(unsigned long) */
int64_t _Znwm = 0x402206;

void** fun_402200(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _Znwm;
}

/* DirNode::num_files() const */
int32_t _ZNK7DirNode9num_filesEv(void** rdi, void** rsi, void** rdx) {
    uint64_t rax4;

    rax4 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 32)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 24))) >> 5;
    return *reinterpret_cast<int32_t*>(&rax4);
}

void** fun_4020a0(int64_t rdi, void** rsi, void** rdx, ...);

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > __gnu_cxx::__to_xstring<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, char>(int (*)(char*, unsigned long, char const*, __va_list_tag*), unsigned long, char const*, ...) */
void** _ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z(void** rdi, int64_t rsi, void** rdx, void** rcx, void** r8, int64_t r9);

void vsnprintf();

struct s7 {
    void** f0;
    signed char[7] pad8;
    void** f8;
    signed char[7] pad16;
    void** f16;
};

struct s7* fun_401f70(void** rdi, ...);

void fun_402180(void** rdi, void* rsi);

/* std::out_of_range::~out_of_range() */
void _ZNSt12out_of_rangeD1Ev();

void** fun_402150(void** rdi, void** rsi, void** rdx, ...);

void fun_4020b0(void** rdi, void** rsi, void** rdx, ...);

/* DirNode::get_file(int) const */
void** _ZNK7DirNode8get_fileEi(void** rdi, void** rsi, void** rdx) {
    void* rsp4;
    int32_t ebp5;
    void** r15_6;
    void** rcx7;
    uint64_t rax8;
    void** rax9;
    void** rsp10;
    void** rbx11;
    void** r8_12;
    int64_t r9_13;
    void** rsp14;
    struct s7* rax15;
    void* rsp16;
    void** v17;
    void** rcx18;
    void** rdx19;
    void** rax20;
    void** r14_21;
    void** r8_22;
    void** rax23;
    void*** rsp24;
    void** v25;
    int64_t v26;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 72);
    ebp5 = *reinterpret_cast<int32_t*>(&rdx);
    r15_6 = rdi;
    rcx7 = *reinterpret_cast<void***>(rsi + 24);
    rax8 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi + 32)) - reinterpret_cast<unsigned char>(rcx7)) >> 5;
    if (*reinterpret_cast<int32_t*>(&rax8) <= ebp5) {
        rax9 = fun_4020a0(16, rsi, rdx);
        rsp10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
        rbx11 = rax9;
        *reinterpret_cast<int32_t*>(&r8_12) = ebp5;
        *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
        _ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z(rsp10, vsnprintf, 16, "%d", r8_12, r9_13);
        rsp14 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp10 - 8) + 8);
        rax15 = fun_401f70(rsp14, rsp14);
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp14 - 8) + 8);
        r15_6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp16) + 48);
        v17 = r15_6;
        rcx18 = reinterpret_cast<void**>(&rax15->f16);
        if (rax15->f0 != rcx18) {
            v17 = rax15->f0;
        } else {
            __asm__("movups xmm0, [rdx]");
            __asm__("movups [r15], xmm0");
        }
        rax15->f0 = rcx18;
        rax15->f8 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(&rax15->f16) = reinterpret_cast<void**>(0);
        fun_402180(rbx11, reinterpret_cast<uint64_t>(rsp16) + 32);
        ebp5 = 0;
        *reinterpret_cast<int32_t*>(&rsi) = 0x60b510;
        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(_ZNSt12out_of_rangeD1Ev);
        *reinterpret_cast<int32_t*>(&rdx19 + 4) = 0;
        fun_402150(rbx11, 0x60b510, _ZNSt12out_of_rangeD1Ev);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8 - 8 + 8);
    } else {
        rax20 = r15_6 + 16;
        *reinterpret_cast<void***>(r15_6) = rax20;
        rdx19 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(ebp5)) << 5);
        r14_21 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<unsigned char>(rdx19));
        rbx11 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<unsigned char>(rdx19) + 8);
        if (r14_21 || !rbx11) {
            if (reinterpret_cast<unsigned char>(rbx11) > reinterpret_cast<unsigned char>(15)) {
                rax20 = fun_401ef0(r15_6, reinterpret_cast<uint64_t>(rsp4) + 64);
                *reinterpret_cast<void***>(r15_6) = rax20;
                rcx7 = rbx11;
                *reinterpret_cast<void***>(r15_6 + 16) = rcx7;
            }
            if (rbx11) {
                if (!reinterpret_cast<int1_t>(rbx11 == 1)) {
                    fun_402240(rax20, r14_21, rbx11, rcx7, r8_22);
                } else {
                    *reinterpret_cast<void***>(rax20) = *reinterpret_cast<void***>(r14_21);
                }
            }
            *reinterpret_cast<void***>(r15_6 + 8) = rbx11;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_6)) + reinterpret_cast<unsigned char>(rbx11)) = 0;
            return r15_6;
        }
    }
    rax23 = fun_4020d0("basic_string::_M_construct null not valid", rsi, "basic_string::_M_construct null not valid", rsi);
    rsp24 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
    if (v17 != r15_6) {
        fun_401ec0(v17, v17);
        rsp24 = rsp24 - 8 + 8;
    }
    if (v25 != rsp24 + 16) {
        fun_401ec0(v25, v25);
    }
    if (*reinterpret_cast<signed char*>(&ebp5)) {
        fun_4020b0(rbx11, rsi, rdx19);
    }
    fun_402210(rax23, rsi, rax23, rsi);
    goto v26;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_replace(unsigned long, unsigned long, char const*, unsigned long) */
int64_t _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm = 0x401f76;

struct s7* fun_401f70(void** rdi, ...) {
    goto _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm;
}

/* DirNode::num_subdirs() const */
void** _ZNK7DirNode11num_subdirsEv(void** rdi, void** rsi, void** rdx) {
    return reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 8)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi))) >> 3;
}

/* DirNode::get_subdir(int) const */
void** _ZNK7DirNode10get_subdirEi(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9, void** a7) {
    int32_t ebp8;
    void** rax9;
    uint64_t rcx10;
    void** rax11;
    void* rsp12;
    void** r8_13;
    void* rsp14;
    void** rdi15;
    struct s7* rax16;
    void** rcx17;

    ebp8 = *reinterpret_cast<int32_t*>(&rsi);
    rax9 = *reinterpret_cast<void***>(rdi);
    rcx10 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 8)) - reinterpret_cast<unsigned char>(rax9)) >> 3;
    if (*reinterpret_cast<int32_t*>(&rcx10) <= ebp8) {
        rax11 = fun_4020a0(16, rsi, rdx);
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 72 - 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_13) = ebp8;
        *reinterpret_cast<int32_t*>(&r8_13 + 4) = 0;
        _ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z(reinterpret_cast<int64_t>(rsp12) + 8, vsnprintf, 16, "%d", r8_13, r9);
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
        rdi15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp14) + 8);
        rax16 = fun_401f70(rdi15, rdi15);
        rcx17 = reinterpret_cast<void**>(&rax16->f16);
        if (rax16->f0 == rcx17) {
            __asm__("movups xmm0, [rdx]");
            __asm__("movups [r15], xmm0");
        }
        rax16->f0 = rcx17;
        rax16->f8 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(&rax16->f16) = reinterpret_cast<void**>(0);
        fun_402180(rax11, reinterpret_cast<int64_t>(rsp14) - 8 + 8 + 40);
        ebp8 = 0;
        rax9 = fun_402150(rax11, 0x60b510, _ZNSt12out_of_rangeD1Ev);
    }
    return *reinterpret_cast<void***>(rax9 + ebp8 * 8);
}

void** g4081d7 = reinterpret_cast<void**>(98);

void** g4081df = reinterpret_cast<void**>(0x72);

/* DirNode::get_name() const */
void** _ZNK7DirNode8get_nameEv(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    void* rsp7;
    void** rax8;
    void** r14_9;
    void** r15_10;
    void** rax11;
    void** rcx12;
    uint64_t rcx13;
    void** rax14;
    void* rsp15;
    void** r8_16;
    void* rsp17;
    void** rdi18;
    struct s7* rax19;
    void** rcx20;
    int64_t v21;

    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 16);
    rax8 = rdi + 16;
    *reinterpret_cast<void***>(rdi) = rax8;
    r14_9 = *reinterpret_cast<void***>(rsi + 48);
    r15_10 = *reinterpret_cast<void***>(rsi + 56);
    if (r14_9 || !r15_10) {
        if (reinterpret_cast<unsigned char>(r15_10) > reinterpret_cast<unsigned char>(15)) {
            rax8 = fun_401ef0(rdi, reinterpret_cast<int64_t>(rsp7) + 8);
            *reinterpret_cast<void***>(rdi) = rax8;
            rcx = r15_10;
            *reinterpret_cast<void***>(rdi + 16) = rcx;
        }
        if (r15_10) {
            if (!reinterpret_cast<int1_t>(r15_10 == 1)) {
                fun_402240(rax8, r14_9, r15_10, rcx, r8);
            } else {
                *reinterpret_cast<void***>(rax8) = *reinterpret_cast<void***>(r14_9);
            }
        }
        *reinterpret_cast<void***>(rdi + 8) = r15_10;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi)) + reinterpret_cast<unsigned char>(r15_10)) = 0;
        return rdi;
    }
    fun_4020d0("basic_string::_M_construct null not valid", rsi);
    rax11 = g4081d7;
    rcx12 = g4081df;
    rcx13 = reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rcx12) - reinterpret_cast<unsigned char>(rax11)) >> 3;
    if (*reinterpret_cast<int32_t*>(&rcx13) > *reinterpret_cast<int32_t*>(&rsi)) 
        goto addr_4065fe_11;
    rax14 = fun_4020a0(16, rsi, rdx);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8);
    *reinterpret_cast<int32_t*>(&r8_16) = *reinterpret_cast<int32_t*>(&rsi);
    *reinterpret_cast<int32_t*>(&r8_16 + 4) = 0;
    _ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z(reinterpret_cast<int64_t>(rsp15) + 8, vsnprintf, 16, "%d", r8_16, r9);
    rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
    rdi18 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp17) + 8);
    rax19 = fun_401f70(rdi18, rdi18);
    rcx20 = reinterpret_cast<void**>(&rax19->f16);
    if (rax19->f0 == rcx20) {
        __asm__("movups xmm0, [rdx]");
        __asm__("movups [r15], xmm0");
    }
    rax19->f0 = rcx20;
    rax19->f8 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(&rax19->f16) = reinterpret_cast<void**>(0);
    fun_402180(rax14, reinterpret_cast<int64_t>(rsp17) - 8 + 8 + 40);
    fun_402150(rax14, 0x60b510, _ZNSt12out_of_rangeD1Ev);
    addr_4065fe_11:
    goto v21;
}

struct s8 {
    void*** f0;
    signed char[8] pad16;
    uint64_t f16;
};

/* WordMap::~WordMap() */
void _ZN7WordMapD2Ev(struct s8* rdi) {
    struct s8* r14_2;
    void*** rdi3;
    uint64_t rax4;
    uint64_t rbx5;
    void** r15_6;

    r14_2 = rdi;
    rdi3 = r14_2->f0;
    rax4 = r14_2->f16;
    *reinterpret_cast<int32_t*>(&rbx5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0;
    if (rax4) {
        do {
            r15_6 = rdi3[rbx5 * 8];
            if (r15_6) {
                _ZN9IndexListD1Ev(r15_6);
                fun_401ec0(r15_6);
                rdi3 = r14_2->f0;
                rax4 = r14_2->f16;
            }
            ++rbx5;
        } while (rbx5 < rax4);
    }
    if (!rdi3) {
        return;
    } else {
        goto _ZdaPv;
    }
}

/* std::__cxx11::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >::basic_ostringstream(std::_Ios_Openmode) */
int64_t _ZNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode = 0x401f66;

void fun_401f60(void** rdi, int64_t rsi, void** rdx) {
    goto _ZNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::__ostream_insert<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*, long) */
int64_t _ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l = 0x402026;

void** fun_402020(void** rdi, void** rsi, void** rdx) {
    goto _ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l;
}

/* std::ostream::operator<<(int) */
int64_t _ZNSolsEi = 0x401e56;

void** fun_401e50(void** rdi, int64_t rsi, void** rdx) {
    goto _ZNSolsEi;
}

/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str() const */
int64_t _ZNKSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE3strEv = 0x402016;

void fun_402010(void* rdi, void* rsi, void** rdx) {
    goto _ZNKSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE3strEv;
}

/* std::locale::~locale() */
int64_t _ZNSt6localeD1Ev = 0x402226;

void fun_402220(void* rdi, void** rsi, void** rdx) {
    goto _ZNSt6localeD1Ev;
}

/* std::ios_base::~ios_base() */
int64_t _ZNSt8ios_baseD2Ev = 0x402086;

void fun_402080(void** rdi, void** rsi, void** rdx) {
    goto _ZNSt8ios_baseD2Ev;
}

/* std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream() */
int64_t _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev = 0x401f46;

void fun_401f40(void* rdi, void** rsi, void** rdx) {
    goto _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev;
}

int64_t tolower = 0x402096;

void** fun_402090(int64_t rdi, void** rsi, void** rdx) {
    goto tolower;
}

int64_t isalnum = 0x402176;

int32_t fun_402170(int64_t rdi, void** rsi) {
    goto isalnum;
}

/* void std::set<int, std::less<int>, std::allocator<int> >::insert<std::_Rb_tree_const_iterator<int> >(std::_Rb_tree_const_iterator<int>, std::_Rb_tree_const_iterator<int>) */
void _ZNSt3setIiSt4lessIiESaIiEE6insertISt23_Rb_tree_const_iteratorIiEEEvT_S7_(void** rdi, void** rsi, void** rdx);

/* IndexList::insensitiveIndices() */
void** _ZN9IndexList18insensitiveIndicesEv(void** rdi, void** rsi, void** rdx) {
    void** r15_4;
    void** rax5;
    void** rbx6;
    void** rsi7;

    r15_4 = rdi;
    rax5 = r15_4 + 8;
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [r15+0x18], xmm0");
    __asm__("movups [r15+0x8], xmm0");
    *reinterpret_cast<void***>(r15_4 + 40) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r15_4 + 24) = rax5;
    *reinterpret_cast<void***>(r15_4 + 32) = rax5;
    rbx6 = *reinterpret_cast<void***>(rsi);
    while (rbx6) {
        rsi7 = *reinterpret_cast<void***>(rbx6 + 56);
        _ZNSt3setIiSt4lessIiESaIiEE6insertISt23_Rb_tree_const_iteratorIiEEEvT_S7_(r15_4, rsi7, rbx6 + 40);
        rbx6 = *reinterpret_cast<void***>(rbx6 + 80);
    }
    return r15_4;
}

/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_erase(std::_Rb_tree_node<int>*) */
void** _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(void** rdi, void** rsi, void** rdx) {
    void** rbx4;
    void** r14_5;
    void** rsi6;
    void** r15_7;
    void** rax8;

    rbx4 = rsi;
    r14_5 = rdi;
    if (rbx4) {
        do {
            rsi6 = *reinterpret_cast<void***>(rbx4 + 24);
            _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(r14_5, rsi6, rdx);
            r15_7 = *reinterpret_cast<void***>(rbx4 + 16);
            rax8 = fun_401ec0(rbx4, rbx4);
            rbx4 = r15_7;
        } while (r15_7);
    }
    return rax8;
}

/* IndexList::postOrderDelete(IndexList::Node*) */
void _ZN9IndexList15postOrderDeleteEPNS_4NodeE();

/* IndexList::~IndexList() */
void _ZN9IndexListD1Ev(void** rdi) {
    _ZN9IndexList15postOrderDeleteEPNS_4NodeE();
    if (*reinterpret_cast<void***>(rdi + 8) == rdi + 24) {
        return;
    } else {
        goto _ZdlPv;
    }
}

void fun_402110(void** rdi, void** rsi, void** rdx) {
    goto _ZdaPv;
}

/* operator new[](unsigned long) */
int64_t _Znam = 0x401eb6;

void** fun_401eb0(void** rdi) {
    goto _Znam;
}

int64_t memset = 0x401e66;

void fun_401e60(void** rdi) {
    goto memset;
}

/* IndexList::findNode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx);

void** fun_401f30(void** rdi, void** rsi, void** rdx, void** rcx);

void** fun_402060(int64_t rdi, void** rsi, void** rdx, void** rcx);

/* IndexList::findNode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, IndexList::Node*) */
void** _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPNS_4NodeE(void** rdi, void** rsi, void** rdx);

/* IndexList::getWord() */
void** _ZN9IndexList7getWordEv(void** rdi, void** rsi, void** edx) {
    void** rdx3;
    void* rsp4;
    void** rax5;
    void** r14_6;
    void** r15_7;
    void** rcx8;
    void** r8_9;
    void* rsp10;
    void** ebx11;
    void** r12_12;
    void** v13;
    void** r14_14;
    void** rbp15;
    void** rax16;
    void** rcx17;
    void** r8_18;
    void** rcx19;
    void** rsi20;
    void** rax21;
    void* rsp22;
    void** r15_23;
    void** rax24;
    void* rsp25;
    void** r15_26;
    void** rax27;
    void** v28;
    void** r14_29;
    void** rbp30;
    void** r8_31;
    void** r12_32;
    void** rsi33;
    void** rcx34;
    void** rbp35;
    void** r14_36;
    void** rcx37;
    void** rbp38;
    void** rax39;
    void** rax40;
    unsigned char r13b41;
    void** rax42;
    int64_t rdi43;
    void** rax44;
    int64_t v45;
    unsigned char r12b46;
    void** rax47;
    int64_t rdi48;
    void** rax49;
    void* rsp50;
    void** rsp51;
    void** r12_52;
    void** v53;
    void** r15_54;
    void** rbx55;
    void** rax56;
    void** rcx57;
    void** r8_58;
    void** rdx59;
    int64_t v60;
    void** rax61;
    void** r15_62;
    void** rax63;
    void** rbx64;
    void** rsi65;

    rdx3 = edx;
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 16);
    rax5 = rdi + 16;
    *reinterpret_cast<void***>(rdi) = rax5;
    r14_6 = *reinterpret_cast<void***>(rsi + 8);
    r15_7 = *reinterpret_cast<void***>(rsi + 16);
    if (r14_6 || !r15_7) {
        if (reinterpret_cast<unsigned char>(r15_7) > reinterpret_cast<unsigned char>(15)) {
            rax5 = fun_401ef0(rdi, reinterpret_cast<int64_t>(rsp4) + 8);
            *reinterpret_cast<void***>(rdi) = rax5;
            rcx8 = r15_7;
            *reinterpret_cast<void***>(rdi + 16) = rcx8;
        }
        if (r15_7) {
            if (!reinterpret_cast<int1_t>(r15_7 == 1)) {
                fun_402240(rax5, r14_6, r15_7, rcx8, r8_9);
            } else {
                *reinterpret_cast<void***>(rax5) = *reinterpret_cast<void***>(r14_6);
            }
        }
        *reinterpret_cast<void***>(rdi + 8) = r15_7;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi)) + reinterpret_cast<unsigned char>(r15_7)) = 0;
        return rdi;
    }
    fun_4020d0("basic_string::_M_construct null not valid", rsi);
    rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x68);
    ebx11 = rdx3;
    r12_12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp10) + 72);
    v13 = r12_12;
    r14_14 = *reinterpret_cast<void***>(rsi);
    rbp15 = *reinterpret_cast<void***>(rsi + 8);
    if (r14_14) 
        goto addr_405556_11;
    if (rbp15) 
        goto addr_40580f_13;
    addr_405556_11:
    if (reinterpret_cast<unsigned char>(rbp15) <= reinterpret_cast<unsigned char>(15)) {
        rax16 = r12_12;
    } else {
        rdx3 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
        rax16 = fun_401ef0(reinterpret_cast<int64_t>(rsp10) + 56, reinterpret_cast<int64_t>(rsp10) + 88);
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
        v13 = rax16;
        rcx17 = rbp15;
    }
    if (rbp15) {
        if (!reinterpret_cast<int1_t>(rbp15 == 1)) {
            rdx3 = rbp15;
            fun_402240(rax16, r14_14, rdx3, rcx17, r8_18);
            rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
        } else {
            *reinterpret_cast<void***>(rax16) = *reinterpret_cast<void***>(r14_14);
        }
    }
    rcx19 = v13;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx19) + reinterpret_cast<unsigned char>(rbp15)) = 0;
    rsi20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp10) + 56);
    rax21 = _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE("basic_string::_M_construct null not valid", rsi20, rdx3);
    rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
    r15_23 = rax21;
    if (v13 != r12_12) {
        fun_401ec0(v13, v13);
        rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
    }
    if (!r15_23) {
        rax24 = fun_402200(88, rsi20, rdx3, rcx19);
        rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
        r15_26 = rax24;
        rax27 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp25) + 40);
        v28 = rax27;
        r14_29 = *reinterpret_cast<void***>(rsi);
        rbp30 = *reinterpret_cast<void***>(rsi + 8);
        if (!r14_29 && rbp30) {
            rax27 = fun_4020d0("basic_string::_M_construct null not valid", rsi20, "basic_string::_M_construct null not valid", rsi20);
            rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
        }
        if (reinterpret_cast<unsigned char>(rbp30) > reinterpret_cast<unsigned char>(15)) {
            rdx3 = reinterpret_cast<void**>(0);
            *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
            rax27 = fun_401ef0(reinterpret_cast<int64_t>(rsp25) + 24, reinterpret_cast<int64_t>(rsp25) + 96);
            rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
            v28 = rax27;
            rcx19 = rbp30;
        }
        if (rbp30) {
            if (!reinterpret_cast<int1_t>(rbp30 == 1)) {
                rdx3 = rbp30;
                fun_402240(rax27, r14_29, rdx3, rcx19, r8_31);
                rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax27) = *reinterpret_cast<void***>(r14_29);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(rbp30)) = 0;
        *reinterpret_cast<void***>(r15_26) = rax24 + 16;
        *reinterpret_cast<void***>(r15_26 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(r15_26 + 16) = reinterpret_cast<void**>(0);
        r12_32 = rax24 + 40;
        __asm__("xorps xmm0, xmm0");
        __asm__("movups [r15+0x38], xmm0");
        __asm__("movups [r15+0x28], xmm0");
        *reinterpret_cast<int64_t*>(r15_26 + 72) = 0;
        *reinterpret_cast<void***>(r15_26 + 56) = r12_32;
        *reinterpret_cast<void***>(r15_26 + 64) = r12_32;
        rsi33 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp25) + 24);
        fun_401fc0(r15_26, rsi33, rdx3, v28);
        rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
        *reinterpret_cast<void***>(r15_26 + 80) = reinterpret_cast<void**>(0);
        rcx34 = *reinterpret_cast<void***>(r15_26 + 48);
        rbp35 = r12_32;
        if (rcx34) 
            goto addr_405769_32;
    } else {
        r14_36 = r15_23 + 40;
        rcx37 = *reinterpret_cast<void***>(r15_23 + 48);
        rbp38 = r14_36;
        if (!rcx37) {
            addr_405623_34:
            if (rbp38 == *reinterpret_cast<void***>(r15_23 + 56)) 
                goto addr_40563a_35; else 
                goto addr_405629_36;
        } else {
            do {
                rbp38 = rcx37;
                rdx3 = rbp38 + 24;
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp38 + 32)) > reinterpret_cast<signed char>(ebx11)) {
                    rdx3 = rbp38 + 16;
                }
                rcx37 = *reinterpret_cast<void***>(rdx3);
            } while (rcx37);
            rax39 = rbp38;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp38 + 32)) <= reinterpret_cast<signed char>(ebx11)) 
                goto addr_405631_42; else 
                goto addr_405623_34;
        }
    }
    addr_405793_43:
    if (rbp35 == *reinterpret_cast<void***>(r15_26 + 56)) 
        goto addr_4057a6_44;
    rax40 = fun_401f30(rbp35, rsi33, rdx3, rcx34);
    rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
    addr_4057a1_46:
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax40 + 32)) >= reinterpret_cast<signed char>(ebx11)) {
        addr_4057dd_47:
        if (v28 != reinterpret_cast<int64_t>(rsp22) + 40) {
            fun_401ec0(v28, v28);
        }
    } else {
        addr_4057a6_44:
        if (rbp35) {
            r13b41 = 1;
            if (r12_32 != rbp35) {
                r13b41 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp35 + 32)) > reinterpret_cast<signed char>(ebx11));
            }
            rax42 = fun_402200(40, rsi33, rdx3, rcx34);
            *reinterpret_cast<void***>(rax42 + 32) = ebx11;
            *reinterpret_cast<uint32_t*>(&rdi43) = r13b41;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = 0;
            fun_402060(rdi43, rax42, rbp35, r12_32);
            rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8 - 8 + 8);
            *reinterpret_cast<int64_t*>(r15_26 + 72) = *reinterpret_cast<int64_t*>(r15_26 + 72) + 1;
            goto addr_4057dd_47;
        }
    }
    rax44 = g4081d7;
    *reinterpret_cast<void***>(r15_26 + 80) = rax44;
    g4081d7 = r15_26;
    goto addr_405800_53;
    addr_405769_32:
    do {
        rbp35 = rcx34;
        rdx3 = rbp35 + 24;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp35 + 32)) > reinterpret_cast<signed char>(ebx11)) {
            rdx3 = rbp35 + 16;
        }
        rcx34 = *reinterpret_cast<void***>(rdx3);
    } while (rcx34);
    rax40 = rbp35;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp35 + 32)) <= reinterpret_cast<signed char>(ebx11)) 
        goto addr_4057a1_46; else 
        goto addr_405793_43;
    addr_405629_36:
    rax39 = fun_401f30(rbp38, rsi20, rdx3, rcx37);
    addr_405631_42:
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax39 + 32)) >= reinterpret_cast<signed char>(ebx11)) {
        addr_405800_53:
        goto v45;
    } else {
        addr_40563a_35:
        if (rbp38) {
            r12b46 = 1;
            if (r14_36 != rbp38) {
                r12b46 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp38 + 32)) > reinterpret_cast<signed char>(ebx11));
            }
            rax47 = fun_402200(40, rsi20, rdx3, rcx37);
            *reinterpret_cast<void***>(rax47 + 32) = ebx11;
            *reinterpret_cast<uint32_t*>(&rdi48) = r12b46;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = 0;
            fun_402060(rdi48, rax47, rbp38, r14_36);
            *reinterpret_cast<int64_t*>(r15_23 + 72) = *reinterpret_cast<int64_t*>(r15_23 + 72) + 1;
            goto addr_405800_53;
        }
    }
    addr_40580f_13:
    rax49 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
    rsp50 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
    if (v13 != r12_12) {
        fun_401ec0(v13);
        rsp50 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp50) - 8 + 8);
    }
    fun_402210(rax49, rsi);
    rsp51 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp50) - 8 + 8 - 8 - 8 - 8 - 8 - 40);
    r12_52 = rsp51 + 16;
    v53 = r12_52;
    r15_54 = *reinterpret_cast<void***>(rsi);
    rbx55 = *reinterpret_cast<void***>(rsi + 8);
    if (r15_54 || !rbx55) {
        if (reinterpret_cast<unsigned char>(rbx55) <= reinterpret_cast<unsigned char>(15)) {
            rax56 = r12_52;
        } else {
            rax56 = fun_401ef0(rsp51, rsp51 + 32);
            rsp51 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp51 - 8) + 8);
            v53 = rax56;
            rcx57 = rbx55;
        }
        if (rbx55) {
            if (!reinterpret_cast<int1_t>(rbx55 == 1)) {
                fun_402240(rax56, r15_54, rbx55, rcx57, r8_58);
                rsp51 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp51 - 8) + 8);
            } else {
                *reinterpret_cast<void***>(rax56) = *reinterpret_cast<void***>(r15_54);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v53) + reinterpret_cast<unsigned char>(rbx55)) = 0;
        rdx59 = *reinterpret_cast<void***>(rax49);
        _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPNS_4NodeE(rax49, rsp51, rdx59);
        if (v53 != r12_52) {
            fun_401ec0(v53, v53);
        }
        goto v60;
    } else {
        rax61 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
        if (v53 != r12_52) {
            fun_401ec0(v53);
        }
        fun_402210(rax61, rsi);
        r15_62 = rax61;
        rax63 = r15_62 + 8;
        __asm__("xorps xmm0, xmm0");
        __asm__("movups [r15+0x18], xmm0");
        __asm__("movups [r15+0x8], xmm0");
        *reinterpret_cast<void***>(r15_62 + 40) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(r15_62 + 24) = rax63;
        *reinterpret_cast<void***>(r15_62 + 32) = rax63;
        rbx64 = *reinterpret_cast<void***>(rsi);
        while (rbx64) {
            rsi65 = *reinterpret_cast<void***>(rbx64 + 56);
            _ZNSt3setIiSt4lessIiESaIiEE6insertISt23_Rb_tree_const_iteratorIiEEEvT_S7_(r15_62, rsi65, rbx64 + 40);
            rbx64 = *reinterpret_cast<void***>(rbx64 + 80);
        }
        goto v53;
    }
}

/* WordMap::ensureLoad() */
void _ZN7WordMap10ensureLoadEv(void** rdi);

/* WordMap::getIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN7WordMap8getIndexENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx);

/* WordMap::insert(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, IndexList*) */
void** _ZN7WordMap6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP9IndexList(void** rdi, void** rsi, void** rdx) {
    void** r14_4;
    void* rsp5;
    void** r13_6;
    void** v7;
    void** r15_8;
    void** rbx9;
    void** rax10;
    void** rcx11;
    void** r8_12;
    void** rax13;
    void** rax14;
    void* rsp15;
    void* rsp16;
    void** r14_17;
    void** r13_18;
    void** rax19;
    void** r12_20;
    void** rbx21;
    void** rax22;
    void** rsi23;
    void** rdx24;
    void* rsp25;
    int64_t v26;
    void** rbp27;
    void** r15_28;
    void** rbx29;
    void** v30;

    r14_4 = rdx;
    *reinterpret_cast<void***>(rdi + 8) = *reinterpret_cast<void***>(rdi + 8) + 1;
    _ZN7WordMap10ensureLoadEv(rdi);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 48 - 8 + 8);
    r13_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp5) + 24);
    v7 = r13_6;
    r15_8 = *reinterpret_cast<void***>(rsi);
    rbx9 = *reinterpret_cast<void***>(rsi + 8);
    if (r15_8 || !rbx9) {
        if (reinterpret_cast<unsigned char>(rbx9) <= reinterpret_cast<unsigned char>(15)) {
            rax10 = r13_6;
        } else {
            *reinterpret_cast<int32_t*>(&rdx) = 0;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rax10 = fun_401ef0(reinterpret_cast<int64_t>(rsp5) + 8, reinterpret_cast<int64_t>(rsp5) + 40);
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
            v7 = rax10;
            rcx11 = rbx9;
        }
        if (rbx9) {
            if (!reinterpret_cast<int1_t>(rbx9 == 1)) {
                rdx = rbx9;
                fun_402240(rax10, r15_8, rdx, rcx11, r8_12);
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax10) = *reinterpret_cast<void***>(r15_8);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v7) + reinterpret_cast<unsigned char>(rbx9)) = 0;
        rax13 = _ZN7WordMap8getIndexENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rdi, reinterpret_cast<int64_t>(rsp5) + 8, rdx);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi) + reinterpret_cast<unsigned char>(rax13) * 8) = r14_4;
        if (v7 != r13_6) {
            rax13 = fun_401ec0(v7, v7);
        }
        return rax13;
    }
    rax14 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    if (v7 != r13_6) {
        fun_401ec0(v7);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
    }
    fun_402210(rax14, rsi);
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8);
    r14_17 = rax14;
    r13_18 = *reinterpret_cast<void***>(r14_17 + 16);
    __asm__("movd xmm0, r13");
    __asm__("movdqa xmm1, [rip+0x31be]");
    __asm__("punpckldq xmm0, xmm1");
    __asm__("movapd xmm2, [rip+0x31c2]");
    __asm__("subpd xmm0, xmm2");
    __asm__("pshufd xmm3, xmm0, 0x4e");
    __asm__("addpd xmm3, xmm0");
    __asm__("mulsd xmm3, [rip+0x31bd]");
    __asm__("movq xmm0, [r14+0x8]");
    __asm__("punpckldq xmm0, xmm1");
    __asm__("subpd xmm0, xmm2");
    __asm__("pshufd xmm1, xmm0, 0x4e");
    __asm__("addpd xmm1, xmm0");
    __asm__("ucomisd xmm3, xmm1");
    if (reinterpret_cast<uint64_t>(rsp16) > 40) 
        goto addr_4051bd_16;
    rax19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_18) + reinterpret_cast<unsigned char>(r13_18));
    *reinterpret_cast<void***>(r14_17 + 16) = rax19;
    r12_20 = *reinterpret_cast<void***>(r14_17);
    rbx21 = reinterpret_cast<void**>(0xffffffffffffffff);
    if (!__intrinsic()) {
        rbx21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax19) * 8);
    }
    rax22 = fun_401eb0(rbx21);
    *reinterpret_cast<int32_t*>(&rsi23) = 0;
    *reinterpret_cast<int32_t*>(&rsi23 + 4) = 0;
    rdx24 = rbx21;
    fun_401e60(rax22);
    rsp25 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 40 - 8 + 8 - 8 + 8);
    *reinterpret_cast<void***>(r14_17) = rax22;
    if (r13_18) 
        goto addr_405163_20;
    if (!r12_20) {
        addr_4051bd_16:
        goto v26;
    } else {
        addr_4051b5_22:
        fun_402110(r12_20, rsi23, rdx24);
        goto addr_4051bd_16;
    }
    addr_405163_20:
    *reinterpret_cast<int32_t*>(&rbp27) = 0;
    *reinterpret_cast<int32_t*>(&rbp27 + 4) = 0;
    r15_28 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp25) + 8);
    do {
        rbx29 = *reinterpret_cast<void***>(r12_20 + reinterpret_cast<unsigned char>(rbp27) * 8);
        if (rbx29 && (_ZN9IndexList7getWordEv(r15_28, rbx29, rdx24), rsi23 = r15_28, rdx24 = rbx29, _ZN7WordMap6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP9IndexList(r14_17, rsi23, rdx24), rsp25 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp25) - 8 + 8 - 8 + 8), v30 != reinterpret_cast<uint64_t>(rsp25) + 24)) {
            fun_401ec0(v30, v30);
            rsp25 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp25) - 8 + 8);
        }
        ++rbp27;
    } while (reinterpret_cast<unsigned char>(rbp27) < reinterpret_cast<unsigned char>(r13_18));
    goto addr_4051b5_22;
}

/* std::_Hash_bytes(void const*, unsigned long, unsigned long) */
int64_t _ZSt11_Hash_bytesPKvmm = 0x4020c6;

int64_t fun_4020c0(void** rdi, void** rsi, int64_t rdx) {
    goto _ZSt11_Hash_bytesPKvmm;
}

int64_t memcmp = 0x402126;

int32_t fun_402120(void** rdi, void** rsi) {
    goto memcmp;
}

int64_t __cxa_begin_catch = 0x4021e6;

void fun_4021e0(void** rdi, void** rsi) {
    goto __cxa_begin_catch;
}

/* std::terminate() */
int64_t _ZSt9terminatev = 0x401ff6;

void fun_401ff0() {
    goto _ZSt9terminatev;
}

struct s9 {
    void** f0;
    signed char[15] pad16;
    void** f16;
    signed char[15] pad32;
    void** f32;
    signed char[15] pad48;
    void** f48;
};

/* IndexList::postOrderDelete(IndexList::Node*) */
void _ZN9IndexList15postOrderDeleteEPNS_4NodeE() {
    struct s9* rsi1;
    void** rsi2;
    void** rdx3;
    void** rdi4;

    if (!rsi1) {
        return;
    } else {
        _ZN9IndexList15postOrderDeleteEPNS_4NodeE();
        rsi2 = rsi1->f48;
        _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(&rsi1->f32, rsi2, rdx3);
        rdi4 = rsi1->f0;
        if (rdi4 != &rsi1->f16) {
            fun_401ec0(rdi4, rdi4);
        }
        goto _ZdlPv;
    }
}

/* std::_Rb_tree_decrement(std::_Rb_tree_node_base*) */
int64_t _ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base = 0x401f36;

void** fun_401f30(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base;
}

/* void std::set<int, std::less<int>, std::allocator<int> >::insert<std::_Rb_tree_const_iterator<int> >(std::_Rb_tree_const_iterator<int>, std::_Rb_tree_const_iterator<int>) */
void _ZNSt3setIiSt4lessIiESaIiEE6insertISt23_Rb_tree_const_iteratorIiEEEvT_S7_(void** rdi, void** rsi, void** rdx) {
    void** r14_4;
    void** r13_5;
    void** r15_6;
    void** r12_7;
    void** rbp8;
    void** rbx9;
    void** rax10;
    void** rcx11;
    void** rax12;
    void** rax13;
    unsigned char bpl14;
    void** rax15;
    int64_t rdi16;

    r14_4 = rdx;
    r13_5 = rsi;
    r15_6 = rdi;
    if (r13_5 != r14_4) {
        r12_7 = r15_6 + 8;
        rbp8 = *reinterpret_cast<void***>(r15_6 + 40);
        while (1) {
            if (!rbp8) 
                goto addr_405d42_4;
            rbx9 = *reinterpret_cast<void***>(r15_6 + 32);
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 32)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_5 + 32))) 
                goto addr_405d9a_6;
            addr_405d42_4:
            rax10 = *reinterpret_cast<void***>(r15_6 + 16);
            rbx9 = r12_7;
            if (!rax10) {
                addr_405d83_7:
                if (rbx9 == *reinterpret_cast<void***>(r15_6 + 24)) 
                    goto addr_405d9a_6;
            } else {
                rcx11 = *reinterpret_cast<void***>(r13_5 + 32);
                *reinterpret_cast<int32_t*>(&rcx11 + 4) = 0;
                do {
                    rbx9 = rax10;
                    rdx = *reinterpret_cast<void***>(rbx9 + 32);
                    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                    rsi = rbx9 + 24;
                    if (reinterpret_cast<signed char>(rcx11) < reinterpret_cast<signed char>(rdx)) {
                        rsi = rbx9 + 16;
                    }
                    rax10 = *reinterpret_cast<void***>(rsi);
                } while (rax10);
                rax12 = rbx9;
                if (reinterpret_cast<signed char>(rcx11) >= reinterpret_cast<signed char>(rdx)) 
                    goto addr_405d95_13; else 
                    goto addr_405d83_7;
            }
            rax12 = fun_401f30(rbx9, rsi, rdx, rcx11);
            rcx11 = *reinterpret_cast<void***>(r13_5 + 32);
            *reinterpret_cast<int32_t*>(&rcx11 + 4) = 0;
            addr_405d95_13:
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax12 + 32)) >= reinterpret_cast<signed char>(rcx11)) {
                addr_405de0_15:
                rax13 = fun_401fe0(r13_5, rsi, rdx, rcx11);
                r13_5 = rax13;
                if (r13_5 == r14_4) 
                    break;
            } else {
                addr_405d9a_6:
                if (rbx9) {
                    bpl14 = 1;
                    if (r12_7 != rbx9) {
                        bpl14 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_5 + 32)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 32)));
                    }
                    rax15 = fun_402200(40, rsi, rdx, rcx11);
                    *reinterpret_cast<void***>(rax15 + 32) = *reinterpret_cast<void***>(r13_5 + 32);
                    *reinterpret_cast<uint32_t*>(&rdi16) = bpl14;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = 0;
                    rsi = rax15;
                    rdx = rbx9;
                    rcx11 = r12_7;
                    fun_402060(rdi16, rsi, rdx, rcx11);
                    rbp8 = *reinterpret_cast<void***>(r15_6 + 40) + 1;
                    *reinterpret_cast<void***>(r15_6 + 40) = rbp8;
                    goto addr_405de0_15;
                }
            }
        }
    }
    return;
}

/* std::_Rb_tree_node<int>* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_copy<std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_Alloc_node>(std::_Rb_tree_node<int> const*, std::_Rb_tree_node<int>*, std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_Alloc_node&) */
void** _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_copyINS5_11_Alloc_nodeEEEPSt13_Rb_tree_nodeIiEPKS9_SA_RT_(struct s2* rdi, void** rsi, void** rdx, void** rcx) {
    void** r12_5;
    struct s2* r15_6;
    void** rax7;
    void** r14_8;
    void** rsi9;
    void** rax10;
    void** r13_11;
    void** rbp12;
    void** rax13;
    void** rax14;

    r12_5 = rcx;
    r15_6 = rdi;
    rax7 = fun_402200(40, rsi, rdx, rcx);
    r14_8 = rax7;
    *reinterpret_cast<void***>(r14_8 + 32) = *reinterpret_cast<void***>(rsi + 32);
    *reinterpret_cast<void***>(r14_8) = *reinterpret_cast<void***>(rsi);
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [r14+0x10], xmm0");
    *reinterpret_cast<void***>(r14_8 + 8) = rdx;
    rsi9 = *reinterpret_cast<void***>(rsi + 24);
    if (rsi9) {
        rdx = r14_8;
        rcx = r12_5;
        rax10 = _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_copyINS5_11_Alloc_nodeEEEPSt13_Rb_tree_nodeIiEPKS9_SA_RT_(r15_6, rsi9, rdx, rcx);
        *reinterpret_cast<void***>(r14_8 + 24) = rax10;
    }
    r13_11 = *reinterpret_cast<void***>(rsi + 16);
    if (r13_11) {
        rbp12 = r14_8;
        do {
            rax13 = fun_402200(40, rsi9, rdx, rcx);
            *reinterpret_cast<void***>(rax13 + 32) = *reinterpret_cast<void***>(r13_11 + 32);
            *reinterpret_cast<void***>(rax13) = *reinterpret_cast<void***>(r13_11);
            __asm__("xorps xmm0, xmm0");
            __asm__("movups [rbx+0x10], xmm0");
            *reinterpret_cast<void***>(rbp12 + 16) = rax13;
            *reinterpret_cast<void***>(rax13 + 8) = rbp12;
            rsi9 = *reinterpret_cast<void***>(r13_11 + 24);
            if (rsi9) {
                rdx = rax13;
                rcx = r12_5;
                rax14 = _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_copyINS5_11_Alloc_nodeEEEPSt13_Rb_tree_nodeIiEPKS9_SA_RT_(r15_6, rsi9, rdx, rcx);
                *reinterpret_cast<void***>(rax13 + 24) = rax14;
            }
            r13_11 = *reinterpret_cast<void***>(r13_11 + 16);
            rbp12 = rax13;
        } while (r13_11);
    }
    return r14_8;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >* std::__uninitialized_copy<false>::__uninit_copy<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*) */
void** _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_(void** rdi, void** rsi, void** rdx);

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >* std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > >(unsigned long, __gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, __gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >) */
void** _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS5_S7_EEEEPS5_mT_SF_(void** rdi, void** rsi, void** rdx, void** rcx, void** r8);

/* std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::operator=(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&) */
void** _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEaSERKS7_(void** rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    void** rbp6;
    void** r15_7;
    void** r12_8;
    void** rcx9;
    void* rax10;
    void** r13_11;
    void** rbx12;
    void** v13;
    void** v14;
    void** r13_15;
    void** rdx16;
    void** r14_17;
    void** rbp18;
    void** rbp19;
    void** rdi20;
    void** rbx21;
    void** r14_22;
    void** rax23;
    void** r14_24;
    void** rbp25;
    void** rbx26;
    void** rdi27;
    void** rbp28;

    rbp6 = rsi;
    r15_7 = rdi;
    if (rbp6 != r15_7) {
        r12_8 = *reinterpret_cast<void***>(rbp6);
        rcx9 = *reinterpret_cast<void***>(rbp6 + 8);
        rax10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx9) - reinterpret_cast<unsigned char>(r12_8));
        r13_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax10) >> 5);
        rbx12 = *reinterpret_cast<void***>(r15_7);
        if (reinterpret_cast<unsigned char>(r13_11) <= reinterpret_cast<unsigned char>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_7 + 16)) - reinterpret_cast<unsigned char>(rbx12)) >> 5)) {
            v13 = r15_7 + 8;
            v14 = r13_11;
            r13_15 = *reinterpret_cast<void***>(r15_7 + 8);
            rdx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_15) - reinterpret_cast<unsigned char>(rbx12));
            r14_17 = reinterpret_cast<void**>(reinterpret_cast<signed char>(rdx16) >> 5);
            if (reinterpret_cast<unsigned char>(r14_17) >= reinterpret_cast<unsigned char>(r13_11)) {
                if (reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax10) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax10 == 0)) {
                    rbp18 = v13;
                } else {
                    rbp19 = v14 + 1;
                    do {
                        fun_401fc0(rbx12, r12_8, rdx16, rcx9);
                        r12_8 = r12_8 + 32;
                        rbx12 = rbx12 + 32;
                        --rbp19;
                    } while (reinterpret_cast<signed char>(rbp19) > reinterpret_cast<signed char>(1));
                    rbp18 = v13;
                    r13_15 = *reinterpret_cast<void***>(rbp18);
                }
                if (rbx12 == r13_15) {
                    r13_11 = v14;
                } else {
                    do {
                        rdi20 = *reinterpret_cast<void***>(rbx12);
                        rbx21 = rbx12 + 16;
                        if (rdi20 != rbx21) {
                            fun_401ec0(rdi20, rdi20);
                        }
                        rbx12 = rbx21 + 16;
                    } while (rbx12 != r13_15);
                    r13_11 = v14;
                }
            } else {
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rdx16) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rdx16 == 0))) {
                    r14_22 = r14_17 + 1;
                    do {
                        fun_401fc0(rbx12, r12_8, rdx16, rcx9);
                        r12_8 = r12_8 + 32;
                        rbx12 = rbx12 + 32;
                        --r14_22;
                    } while (reinterpret_cast<signed char>(r14_22) > reinterpret_cast<signed char>(1));
                    r12_8 = *reinterpret_cast<void***>(rbp6);
                    rcx9 = *reinterpret_cast<void***>(rbp6 + 8);
                    rbx12 = *reinterpret_cast<void***>(r15_7);
                    r13_15 = *reinterpret_cast<void***>(r15_7 + 8);
                }
                _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r13_15) - reinterpret_cast<unsigned char>(rbx12)) + reinterpret_cast<unsigned char>(r12_8), rcx9, r13_15);
                r13_11 = v14;
                rbp18 = v13;
            }
        } else {
            rax23 = _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS5_S7_EEEEPS5_mT_SF_(r15_7, r13_11, r12_8, rcx9, r8);
            r14_24 = rax23;
            rbp25 = *reinterpret_cast<void***>(r15_7);
            rbx26 = *reinterpret_cast<void***>(r15_7 + 8);
            if (rbp25 != rbx26) {
                do {
                    rdi27 = *reinterpret_cast<void***>(rbp25);
                    rbp28 = rbp25 + 16;
                    if (rdi27 != rbp28) {
                        fun_401ec0(rdi27, rdi27);
                    }
                    rbp25 = rbp28 + 16;
                } while (rbp25 != rbx26);
                rbp25 = *reinterpret_cast<void***>(r15_7);
            }
            if (rbp25) {
                fun_401ec0(rbp25, rbp25);
            }
            rbp18 = r15_7 + 8;
            *reinterpret_cast<void***>(r15_7) = r14_24;
            *reinterpret_cast<void***>(r15_7 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_24) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r13_11) << 5));
        }
        *reinterpret_cast<void***>(rbp18) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r13_11) << 5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_7)));
    }
    return r15_7;
}

void fun_402040(void** rdi, void** rsi, void* rdx);

void** fun_4021a0();

/* std::vector<DirNode*, std::allocator<DirNode*> >::operator=(std::vector<DirNode*, std::allocator<DirNode*> > const&) */
void** _ZNSt6vectorIP7DirNodeSaIS1_EEaSERKS3_(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9, void** a7) {
    void** r15_8;
    void** r14_9;
    void** rax10;
    void** r13_11;
    void** rdi12;
    void** rcx13;
    void** rbp14;
    void** rax15;
    void* rdx16;
    void* r14_17;
    void** rsi18;
    void** rsi19;
    void** rbx20;
    void** r14_21;
    void** rax22;
    void* rsp23;
    void** rax24;
    void** rdi25;
    void** r15_26;
    void** rcx27;
    int64_t* rsp28;
    int32_t eax29;
    void* rsp30;
    void** rbx31;
    void** rax32;
    int64_t* rsp33;
    int64_t rax34;

    if (rsi == rdi) {
        addr_406bc4_2:
        return rdi;
    } else {
        r15_8 = *reinterpret_cast<void***>(rsi);
        r14_9 = *reinterpret_cast<void***>(rsi + 8);
        rax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_9) - reinterpret_cast<unsigned char>(r15_8));
        r13_11 = reinterpret_cast<void**>(reinterpret_cast<signed char>(rax10) >> 3);
        rdi12 = *reinterpret_cast<void***>(rdi);
        rcx13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 16)) - reinterpret_cast<unsigned char>(rdi12)) >> 3);
        if (reinterpret_cast<unsigned char>(r13_11) <= reinterpret_cast<unsigned char>(rcx13)) {
            rbp14 = rdi + 8;
            rax15 = *reinterpret_cast<void***>(rdi + 8);
            rdx16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax15) - reinterpret_cast<unsigned char>(rdi12));
            if (reinterpret_cast<unsigned char>(reinterpret_cast<int64_t>(rdx16) >> 3) >= reinterpret_cast<unsigned char>(r13_11)) {
                r14_17 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r14_9) - reinterpret_cast<unsigned char>(r15_8));
                if (!r14_17) {
                    addr_406bb8_6:
                    *reinterpret_cast<void***>(rbp14) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r13_11) << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi)));
                    goto addr_406bc4_2;
                } else {
                    rsi18 = r15_8;
                }
            } else {
                if (rax15 != rdi12) {
                    fun_402040(rdi12, r15_8, rdx16);
                    r15_8 = *reinterpret_cast<void***>(rsi);
                    r14_9 = *reinterpret_cast<void***>(rsi + 8);
                    rdi12 = *reinterpret_cast<void***>(rdi);
                    rax15 = *reinterpret_cast<void***>(rdi + 8);
                    rsi19 = rax15;
                } else {
                    rsi19 = rdi12;
                }
                rsi18 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rsi19) - reinterpret_cast<unsigned char>(rdi12)) + reinterpret_cast<unsigned char>(r15_8));
                r14_17 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r14_9) - reinterpret_cast<unsigned char>(rsi18));
                if (!r14_17) 
                    goto addr_406bb8_6;
                rdi12 = rax15;
            }
        } else {
            *reinterpret_cast<int32_t*>(&rbx20) = 0;
            *reinterpret_cast<int32_t*>(&rbx20 + 4) = 0;
            if (!r13_11) {
                addr_406b22_14:
                r14_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_9) - reinterpret_cast<unsigned char>(r15_8));
                if (r14_21) {
                    fun_402240(rbx20, r15_8, r14_21, rcx13, r8);
                    goto addr_406b35_16;
                }
            } else {
                rcx13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_11) >> 61);
                if (rcx13) {
                    rax22 = fun_4021a0();
                    rsp23 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 + 8 - 8);
                    if (!*reinterpret_cast<signed char*>(&rax22)) 
                        goto addr_406c26_20; else 
                        goto addr_406bfa_21;
                } else {
                    rax24 = fun_402200(rax10, rsi, rdx, rcx13);
                    rbx20 = rax24;
                    goto addr_406b22_14;
                }
            }
        }
    }
    fun_402040(rdi12, rsi18, r14_17);
    goto addr_406bb8_6;
    addr_406b35_16:
    rdi25 = *reinterpret_cast<void***>(rdi);
    if (rdi25) {
        fun_401ec0(rdi25, rdi25);
    }
    *reinterpret_cast<void***>(rdi) = rbx20;
    *reinterpret_cast<void***>(rdi + 16) = rbx20 + reinterpret_cast<unsigned char>(r13_11) * 8;
    rbp14 = rdi + 8;
    goto addr_406bb8_6;
    addr_406c26_20:
    r15_26 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp23) - 8 - 8 - 8 - 0xd8 - (reinterpret_cast<uint64_t>(rdx + 15) & 0xfffffffffffffff0));
    rcx27 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp23) + 0xffffffffffffffc0);
    rsp28 = reinterpret_cast<int64_t*>(r15_26 - 8);
    *rsp28 = 0x406c78;
    eax29 = reinterpret_cast<int32_t>(rsi(r15_26, rdx, rcx13, rcx27));
    rsp30 = reinterpret_cast<void*>(rsp28 + 1);
    rbx31 = reinterpret_cast<void**>(static_cast<int64_t>(eax29));
    rax32 = rdi12 + 16;
    *reinterpret_cast<void***>(rdi12) = rax32;
    if (*reinterpret_cast<uint32_t*>(&rbx31) > 15) {
        rsp33 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp30) - 8);
        *rsp33 = 0x406c99;
        rax32 = fun_401ef0(rdi12, reinterpret_cast<int64_t>(rsp23) + 0xffffffffffffffe0);
        rsp30 = reinterpret_cast<void*>(rsp33 + 1);
        *reinterpret_cast<void***>(rdi12) = rax32;
        rcx27 = rbx31;
        *reinterpret_cast<void***>(rdi12 + 16) = rcx27;
    }
    if (rbx31) {
        if (!reinterpret_cast<int1_t>(rbx31 == 1)) {
            *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp30) - 8) = 0x406cc4;
            fun_402240(rax32, r15_26, rbx31, rcx27, r8);
        } else {
            *reinterpret_cast<void***>(rax32) = *reinterpret_cast<void***>(r15_26);
        }
    }
    *reinterpret_cast<void***>(rdi12 + 8) = rbx31;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi12)) + reinterpret_cast<unsigned char>(rbx31)) = 0;
    goto rax34;
    addr_406bfa_21:
    __asm__("movaps [rbp-0xc0], xmm0");
    __asm__("movaps [rbp-0xb0], xmm1");
    __asm__("movaps [rbp-0xa0], xmm2");
    __asm__("movaps [rbp-0x90], xmm3");
    __asm__("movaps [rbp-0x80], xmm4");
    __asm__("movaps [rbp-0x70], xmm5");
    __asm__("movaps [rbp-0x60], xmm6");
    __asm__("movaps [rbp-0x50], xmm7");
    goto addr_406c26_20;
}

int64_t memmove = 0x402046;

void fun_402040(void** rdi, void** rsi, void* rdx) {
    goto memmove;
}

int64_t __cxa_free_exception = 0x4020b6;

void fun_4020b0(void** rdi, void** rsi, void** rdx, ...) {
    goto __cxa_free_exception;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >* std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*>(__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, __gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*) */
void** _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EEEEPS9_EET0_T_SI_SH_(void** rdi, void** rsi, void** rdx);

void fun_402190(void** rdi);

void __clang_call_terminate(void** rdi, void** rsi, void** rdx, void** rcx);

struct s10 {
    signed char[32] pad32;
    void** f32;
};

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >* std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > >(unsigned long, __gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, __gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >) */
void** _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS5_S7_EEEEPS5_mT_SF_(void** rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    int64_t v6;
    int64_t rbx7;
    void** rbx8;
    void** rax9;
    void** rax10;
    void** rdi11;
    void* rsp12;
    void** rbx13;
    void** v14;
    void** v15;
    void** rsi16;
    void** rax17;
    void* rax18;
    void** r15_19;
    void** r14_20;
    void** rax21;
    void** rsi22;
    void** r13_23;
    struct s10* rbp24;

    v6 = rbx7;
    *reinterpret_cast<int32_t*>(&rbx8) = 0;
    *reinterpret_cast<int32_t*>(&rbx8 + 4) = 0;
    if (!rsi) {
        addr_406d1a_2:
        _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EEEEPS9_EET0_T_SI_SH_(rdx, rcx, rbx8);
        return rbx8;
    } else {
        if (reinterpret_cast<unsigned char>(rsi) >> 59) {
            rax9 = fun_4021a0();
            fun_402190(rdi);
            rax10 = fun_402210(rax9, rsi);
            rdi11 = rax10;
            __clang_call_terminate(rdi11, rsi, rdx, rcx);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40);
            rbx13 = rdx;
            v14 = rsi;
            v15 = rdi11;
            if (rdi11 != rsi) 
                goto addr_406d94_6;
        } else {
            rsi16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi) << 5);
            rax17 = fun_402200(rsi16, rsi16, rdx, rcx);
            rbx8 = rax17;
            goto addr_406d1a_2;
        }
    }
    addr_406e71_8:
    goto v6;
    addr_406d94_6:
    *reinterpret_cast<int32_t*>(&rax18) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
    r15_19 = rbx13;
    do {
        r14_20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx13) + reinterpret_cast<uint64_t>(rax18));
        rax21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx13) + reinterpret_cast<uint64_t>(rax18) + 16);
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx13) + reinterpret_cast<uint64_t>(rax18)) = rax21;
        rsi22 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi11) + reinterpret_cast<uint64_t>(rax18));
        r13_23 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi11) + reinterpret_cast<uint64_t>(rax18) + 8);
        if (!rsi22 && r13_23) {
            *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>("basic_string::_M_construct null not valid");
            *reinterpret_cast<int32_t*>(&rdi11 + 4) = 0;
            rax21 = fun_4020d0("basic_string::_M_construct null not valid", rsi22, "basic_string::_M_construct null not valid", rsi22);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
        }
        if (reinterpret_cast<unsigned char>(r13_23) > reinterpret_cast<unsigned char>(15)) {
            rax21 = fun_401ef0(r14_20, reinterpret_cast<int64_t>(rsp12) + 32);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx13) + reinterpret_cast<uint64_t>(rax18)) = rax21;
            rcx = r13_23;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx13) + reinterpret_cast<uint64_t>(rax18) + 16) = rcx;
            r14_20 = r15_19;
            rdi11 = rdi11;
            rsi22 = rsi22;
        }
        rbp24 = reinterpret_cast<struct s10*>(reinterpret_cast<unsigned char>(rdi11) + reinterpret_cast<uint64_t>(rax18));
        if (r13_23) {
            if (!reinterpret_cast<int1_t>(r13_23 == 1)) {
                fun_402240(rax21, rsi22, r13_23, rcx, r8);
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                rdi11 = v15;
            } else {
                *reinterpret_cast<void***>(rax21) = *reinterpret_cast<void***>(rsi22);
            }
        }
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx13) + reinterpret_cast<uint64_t>(rax18) + 8) = r13_23;
        rcx = *reinterpret_cast<void***>(r14_20);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(r13_23)) = 0;
        r15_19 = r15_19 + 32;
        rax18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax18) + 32);
    } while (!reinterpret_cast<int1_t>(&rbp24->f32 == v14));
    goto addr_406e71_8;
}

int64_t memcpy = 0x402246;

void fun_402240(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, ...) {
    goto memcpy;
}

struct s11 {
    signed char[32] pad32;
    void** f32;
};

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >* std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*>(__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, __gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*) */
void** _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EEEEPS9_EET0_T_SI_SH_(void** rdi, void** rsi, void** rdx) {
    void* rsp4;
    void** rbx5;
    void** v6;
    void** v7;
    void* rax8;
    void** r15_9;
    void* r12_10;
    void** r14_11;
    void** rax12;
    void** rsi13;
    void** r13_14;
    void** rcx15;
    struct s11* rbp16;
    void** r8_17;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40);
    rbx5 = rdx;
    v6 = rsi;
    v7 = rdi;
    if (rdi != rsi) {
        *reinterpret_cast<int32_t*>(&rax8) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        r15_9 = rbx5;
        do {
            r12_10 = rax8;
            r14_11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10));
            rax12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10) + 16);
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10)) = rax12;
            rsi13 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(r12_10));
            r13_14 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(r12_10) + 8);
            if (!rsi13 && r13_14) {
                *reinterpret_cast<int32_t*>(&rdi) = reinterpret_cast<int32_t>("basic_string::_M_construct null not valid");
                *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
                rax12 = fun_4020d0("basic_string::_M_construct null not valid", rsi13, "basic_string::_M_construct null not valid", rsi13);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            }
            if (reinterpret_cast<unsigned char>(r13_14) > reinterpret_cast<unsigned char>(15)) {
                rax12 = fun_401ef0(r14_11, reinterpret_cast<int64_t>(rsp4) + 32);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10)) = rax12;
                rcx15 = r13_14;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10) + 16) = rcx15;
                r14_11 = r15_9;
                rdi = rdi;
                rsi13 = rsi13;
            }
            rbp16 = reinterpret_cast<struct s11*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(r12_10));
            if (r13_14) {
                if (!reinterpret_cast<int1_t>(r13_14 == 1)) {
                    fun_402240(rax12, rsi13, r13_14, rcx15, r8_17);
                    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                    rdi = v7;
                } else {
                    *reinterpret_cast<void***>(rax12) = *reinterpret_cast<void***>(rsi13);
                }
            }
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10) + 8) = r13_14;
            rcx15 = *reinterpret_cast<void***>(r14_11);
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx15) + reinterpret_cast<unsigned char>(r13_14)) = 0;
            r15_9 = r15_9 + 32;
            rax8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_10) + 32);
        } while (!reinterpret_cast<int1_t>(&rbp16->f32 == v6));
        rbx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10) + 32);
    }
    return rbx5;
}

int64_t __cxa_rethrow = 0x401f06;

void** fun_401f00(void** rdi, void** rsi) {
    goto __cxa_rethrow;
}

int64_t __cxa_end_catch = 0x402196;

void fun_402190(void** rdi) {
    goto __cxa_end_catch;
}

void __clang_call_terminate(void** rdi, void** rsi, void** rdx, void** rcx) {
    int64_t rax5;

    fun_4021e0(rdi, rsi);
    fun_401ff0();
    *reinterpret_cast<void***>(rdi + 8) = rdi + 24;
    *reinterpret_cast<void***>(rdi + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(rdi + 24) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(0);
    fun_401fc0(rdi + 8, rsi, rdx, rcx);
    goto rax5;
}

int64_t opendir = 0x401fa6;

int64_t fun_401fa0(void** rdi, void** rsi, void** rdx) {
    goto opendir;
}

struct s12 {
    signed char[1] pad1;
    void** f1;
};

struct s12* fun_4020e0(void** rdi, void** rsi, int64_t rdx, int64_t rcx);

void fun_401e90(int64_t rdi, void** rsi, void** rdx, void** rcx);

int32_t fun_401fb0(int64_t rdi, void** rsi, void** rdx, void** rcx);

void fun_401e70(void** rdi, int64_t rsi, void** rdx, ...);

/* std::runtime_error::~runtime_error() */
void _ZNSt13runtime_errorD1Ev();

/* is_file(char const*) */
signed char _Z7is_filePKc(void** rdi, void** rsi, void** rdx, void** rcx, ...);

/* base_name(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
void** _Z9base_nameRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx) {
    void** rsi4;
    struct s12* rax5;
    void* rsp6;
    void** rcx7;
    void** rbx8;
    void** rdx9;
    void** rax10;
    void** r15_11;
    void** r8_12;
    void** rdx13;
    int32_t eax14;
    void** rax15;
    void** rbx16;
    int32_t v17;
    int64_t v18;
    void** rax19;
    void** rax20;
    int64_t v21;

    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>("/\\");
    *reinterpret_cast<int32_t*>(&rsi4 + 4) = 0;
    rax5 = fun_4020e0(rsi, "/\\", -1, 2);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 16 - 8 + 8);
    rcx7 = reinterpret_cast<void**>(&rax5->f1);
    rbx8 = *reinterpret_cast<void***>(rsi + 8);
    if (reinterpret_cast<unsigned char>(rbx8) < reinterpret_cast<unsigned char>(rcx7)) {
        *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>("basic_string::substr");
        *reinterpret_cast<int32_t*>(&rsi4 + 4) = 0;
        rdx9 = rcx7;
        rcx7 = rbx8;
        fun_401e90("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", rdx9, rcx7);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
    } else {
        rax10 = rdi + 16;
        *reinterpret_cast<void***>(rdi) = rax10;
        r15_11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi)) + reinterpret_cast<unsigned char>(rcx7));
        rbx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx8) - reinterpret_cast<unsigned char>(rcx7));
        if (!rbx8 || r15_11) {
            if (reinterpret_cast<unsigned char>(rbx8) > reinterpret_cast<unsigned char>(15)) {
                rax10 = fun_401ef0(rdi, reinterpret_cast<int64_t>(rsp6) + 8);
                *reinterpret_cast<void***>(rdi) = rax10;
                rcx7 = rbx8;
                *reinterpret_cast<void***>(rdi + 16) = rcx7;
            }
            if (rbx8) {
                if (!reinterpret_cast<int1_t>(rbx8 == 1)) {
                    fun_402240(rax10, r15_11, rbx8, rcx7, r8_12);
                } else {
                    *reinterpret_cast<void***>(rax10) = *reinterpret_cast<void***>(r15_11);
                }
            }
            *reinterpret_cast<void***>(rdi + 8) = rbx8;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi)) + reinterpret_cast<unsigned char>(rbx8)) = 0;
            return rdi;
        }
    }
    fun_4020d0("basic_string::_M_construct null not valid", rsi4, "basic_string::_M_construct null not valid", rsi4);
    rdx13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp6) - 8 + 8 - 8 - 8 - 0x98 + 8);
    eax14 = fun_401fb0(1, "basic_string::_M_construct null not valid", rdx13, rcx7);
    if (eax14) {
        rax15 = fun_4020a0(16, "basic_string::_M_construct null not valid", rdx13, 16, "basic_string::_M_construct null not valid", rdx13);
        rbx16 = rax15;
        fun_401e70(rbx16, "stat error: could not build tree", rdx13, rbx16, "stat error: could not build tree", rdx13);
    } else {
        *reinterpret_cast<int32_t*>(&rcx7) = v17;
        *reinterpret_cast<int32_t*>(&rcx7 + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&rcx7 + 1) & 64) {
            goto addr_407f63_16;
        } else {
            if (*reinterpret_cast<int16_t*>(&rcx7) < 0) {
                addr_407f63_16:
                goto v18;
            } else {
                rax19 = fun_4020a0(16, "basic_string::_M_construct null not valid", rdx13);
                rbx16 = rax19;
                fun_401e70(rbx16, "Invalid file found: could not build tree", rdx13);
            }
        }
    }
    rax20 = fun_402150(rbx16, 0x60b530, _ZNSt13runtime_errorD1Ev, rbx16, 0x60b530, _ZNSt13runtime_errorD1Ev);
    fun_4020b0(rbx16, 0x60b530, _ZNSt13runtime_errorD1Ev, rbx16, 0x60b530, _ZNSt13runtime_errorD1Ev);
    fun_402210(rax20, 0x60b530, rax20, 0x60b530);
    _Z7is_filePKc(rax20, 0x60b530, _ZNSt13runtime_errorD1Ev, rcx7, rax20, 0x60b530, _ZNSt13runtime_errorD1Ev);
    goto v21;
}

/* DirNode::DirNode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN7DirNodeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx, void** rcx) {
    void** rax5;

    __asm__("xorps xmm0, xmm0");
    __asm__("movups [r15+0x20], xmm0");
    __asm__("movups [r15+0x10], xmm0");
    __asm__("movups [r15], xmm0");
    *reinterpret_cast<void***>(rdi + 48) = rdi + 64;
    *reinterpret_cast<void***>(rdi + 56) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(rdi + 64) = reinterpret_cast<void**>(0);
    rax5 = fun_401fc0(rdi + 48, rsi, rdx, rcx);
    *reinterpret_cast<void***>(rdi + 80) = reinterpret_cast<void**>(0);
    return rax5;
}

/* is_file(char const*) */
signed char _Z7is_filePKc(void** rdi, void** rsi, void** rdx, void** rcx, ...) {
    void** rdx5;
    int32_t eax6;
    void** rax7;
    void** rbx8;
    int32_t v9;
    int32_t eax10;
    void** rax11;
    void** rax12;
    int64_t v13;

    rdx5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 0x98 + 8);
    eax6 = fun_401fb0(1, rdi, rdx5, rcx);
    if (eax6) {
        rax7 = fun_4020a0(16, rdi, rdx5);
        rbx8 = rax7;
        fun_401e70(rbx8, "stat error: could not build tree", rdx5);
    } else {
        *reinterpret_cast<int32_t*>(&rcx) = v9;
        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&rcx + 1) & 64) {
            eax10 = 0;
            goto addr_407f63_5;
        } else {
            *reinterpret_cast<signed char*>(&eax10) = 1;
            if (*reinterpret_cast<int16_t*>(&rcx) < 0) {
                addr_407f63_5:
                return *reinterpret_cast<signed char*>(&eax10);
            } else {
                rax11 = fun_4020a0(16, rdi, rdx5);
                rbx8 = rax11;
                fun_401e70(rbx8, "Invalid file found: could not build tree", rdx5);
            }
        }
    }
    rax12 = fun_402150(rbx8, 0x60b530, _ZNSt13runtime_errorD1Ev);
    fun_4020b0(rbx8, 0x60b530, _ZNSt13runtime_errorD1Ev);
    fun_402210(rax12, 0x60b530, rax12, 0x60b530);
    _Z7is_filePKc(rax12, 0x60b530, _ZNSt13runtime_errorD1Ev, rcx);
    goto v13;
}

/* DirNode::set_parent(DirNode*) */
void _ZN7DirNode10set_parentEPS_(void** rdi, void** rsi, void** rdx) {
    *reinterpret_cast<void***>(rdi + 80) = rsi;
    return;
}

/* DirNode::add_subdir(DirNode*) */
void _ZN7DirNode10add_subdirEPS_(void** rdi, void** rsi, void** rdx) {
    void** rdx4;
    void** r15_5;
    void** rcx6;
    void** rsi7;
    void* r13_8;
    void** tmp64_9;
    void** r12_10;
    int64_t rax11;
    void** rax12;
    void* rdx13;

    rdx4 = *reinterpret_cast<void***>(rdi + 8);
    if (rdx4 == *reinterpret_cast<void***>(rdi + 16)) {
        r15_5 = *reinterpret_cast<void***>(rdi);
        rcx6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rdx4) - reinterpret_cast<unsigned char>(r15_5)) >> 3);
        *reinterpret_cast<int32_t*>(&rsi7) = 1;
        *reinterpret_cast<int32_t*>(&rsi7 + 4) = 0;
        if (rcx6) {
            rsi7 = rcx6;
        }
        r13_8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi7) + reinterpret_cast<unsigned char>(rcx6));
        if (reinterpret_cast<uint64_t>(r13_8) >> 61) {
            r13_8 = reinterpret_cast<void*>(0x1fffffffffffffff);
        }
        tmp64_9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi7) + reinterpret_cast<unsigned char>(rcx6));
        if (reinterpret_cast<unsigned char>(tmp64_9) < reinterpret_cast<unsigned char>(rsi7)) {
            r13_8 = reinterpret_cast<void*>(0x1fffffffffffffff);
        }
        *reinterpret_cast<int32_t*>(&r12_10) = 0;
        *reinterpret_cast<int32_t*>(&r12_10 + 4) = 0;
        if (r13_8) {
            if (reinterpret_cast<uint64_t>(r13_8) > 0x1fffffffffffffff) {
                fun_4021a0();
                goto rax11;
            } else {
                rax12 = fun_402200(reinterpret_cast<uint64_t>(r13_8) * 8, tmp64_9, rdx4, rcx6);
                r12_10 = rax12;
                r15_5 = *reinterpret_cast<void***>(rdi);
                rdx4 = *reinterpret_cast<void***>(rdi + 8);
            }
        }
        rdx13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx4) - reinterpret_cast<unsigned char>(r15_5));
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_10) + reinterpret_cast<uint64_t>(rdx13)) = rsi;
        if (reinterpret_cast<int64_t>(rdx13) >> 3) {
            fun_402040(r12_10, r15_5, rdx13);
        }
        if (r15_5) {
            fun_401ec0(r15_5, r15_5);
        }
        *reinterpret_cast<void***>(rdi) = r12_10;
        *reinterpret_cast<void***>(rdi + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_10) + reinterpret_cast<uint64_t>(rdx13) + 8);
        *reinterpret_cast<void***>(rdi + 16) = r12_10 + reinterpret_cast<uint64_t>(r13_8) * 8;
    } else {
        *reinterpret_cast<void***>(rdx4) = rsi;
        *reinterpret_cast<void***>(rdi + 8) = *reinterpret_cast<void***>(rdi + 8) + 8;
    }
    return;
}

void** g4081e7 = reinterpret_cast<void**>(95);

struct s13 {
    signed char f0;
    signed char[15] pad16;
    void** f16;
};

/* DirNode::add_file(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN7DirNode8add_fileENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx) {
    void** rsp4;
    void** rbx5;
    void* rsp6;
    void** r14_7;
    void** rax8;
    void** r12_9;
    void** rdx10;
    void** rsi11;
    void** rax12;
    void** r15_13;
    void** r12_14;
    void** rcx15;
    void** r8_16;
    void** rax17;
    void** rdx18;
    int1_t zf19;
    void** r13_20;
    void** rcx21;
    void** tmp64_22;
    void** r15_23;
    void** rax24;
    void** rax25;
    int64_t v26;
    void** rax27;
    void* r12_28;
    void** rax29;
    void** rsi30;
    void** rbx31;
    void** rbp32;
    uint64_t r12_33;
    void** r8_34;
    void** rax35;
    void** rbx36;
    void** rcx37;
    void** r12_38;
    uint64_t rax39;
    void* rdx40;
    struct s13* rsi41;
    void** rbp42;
    void** rdi43;
    void** rbp44;
    void** r15_45;
    void** rcx46;
    void** rsi47;
    void* r13_48;
    void** tmp64_49;
    void** r12_50;
    void** rax51;
    void* rdx52;
    void** rax53;
    void** tmp64_54;

    rsp4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8);
    rbx5 = *reinterpret_cast<void***>(rdi + 32);
    if (rbx5 == *reinterpret_cast<void***>(rdi + 40)) {
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4 + 8) + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 24);
        r14_7 = rdi + 24;
        rax8 = *reinterpret_cast<void***>(r14_7);
        r12_9 = *reinterpret_cast<void***>(r14_7 + 8);
        rdx10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r12_9) - reinterpret_cast<unsigned char>(rax8)) >> 5);
        *reinterpret_cast<int32_t*>(&rsi11) = 1;
        *reinterpret_cast<int32_t*>(&rsi11 + 4) = 0;
        if (!rdx10) 
            goto addr_40705e_4;
    } else {
        rax12 = rbx5 + 16;
        *reinterpret_cast<void***>(rbx5) = rax12;
        r15_13 = *reinterpret_cast<void***>(rsi);
        r12_14 = *reinterpret_cast<void***>(rsi + 8);
        if (r15_13 || !r12_14) {
            if (reinterpret_cast<unsigned char>(r12_14) > reinterpret_cast<unsigned char>(15)) {
                rax12 = fun_401ef0(rbx5, rsp4);
                *reinterpret_cast<void***>(rbx5) = rax12;
                rcx15 = r12_14;
                *reinterpret_cast<void***>(rbx5 + 16) = rcx15;
            }
            if (r12_14) {
                if (!reinterpret_cast<int1_t>(r12_14 == 1)) {
                    fun_402240(rax12, r15_13, r12_14, rcx15, r8_16);
                } else {
                    *reinterpret_cast<void***>(rax12) = *reinterpret_cast<void***>(r15_13);
                }
            }
            *reinterpret_cast<void***>(rbx5 + 8) = r12_14;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5)) + reinterpret_cast<unsigned char>(r12_14)) = 0;
            *reinterpret_cast<void***>(rdi + 32) = *reinterpret_cast<void***>(rdi + 32) + 32;
            return r12_14;
        }
        rax17 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
        rdx18 = g4081df;
        zf19 = rdx18 == g4081e7;
        if (zf19) 
            goto addr_406418_15; else 
            goto addr_40640b_16;
    }
    rsi11 = rdx10;
    addr_40705e_4:
    r13_20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi11) + reinterpret_cast<unsigned char>(rdx10));
    rcx21 = reinterpret_cast<void**>(0x7ffffffffffffff);
    if (reinterpret_cast<unsigned char>(r13_20) >> 59) {
        r13_20 = reinterpret_cast<void**>(0x7ffffffffffffff);
    }
    tmp64_22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi11) + reinterpret_cast<unsigned char>(rdx10));
    if (reinterpret_cast<unsigned char>(tmp64_22) < reinterpret_cast<unsigned char>(rsi11)) {
        r13_20 = reinterpret_cast<void**>(0x7ffffffffffffff);
    }
    *reinterpret_cast<int32_t*>(&r15_23) = 0;
    *reinterpret_cast<int32_t*>(&r15_23 + 4) = 0;
    if (r13_20) {
        if (reinterpret_cast<unsigned char>(r13_20) > reinterpret_cast<unsigned char>(0x7ffffffffffffff)) {
            rax24 = fun_4021a0();
            fun_402190(rdi + 24);
            rax25 = fun_402210(rax24, tmp64_22);
            __clang_call_terminate(rax25, tmp64_22, rdx10, 0x7ffffffffffffff);
            *reinterpret_cast<void***>(rax25) = reinterpret_cast<void**>(0);
            goto v26;
        } else {
            rax27 = fun_402200(reinterpret_cast<unsigned char>(r13_20) << 5, tmp64_22, rdx10, 0x7ffffffffffffff);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
            r15_23 = rax27;
            rax8 = *reinterpret_cast<void***>(r14_7);
            r12_9 = *reinterpret_cast<void***>(r14_7 + 8);
        }
    }
    r12_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r12_9) - reinterpret_cast<unsigned char>(rax8));
    rax29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_23) + reinterpret_cast<uint64_t>(r12_28) + 16);
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_23) + reinterpret_cast<uint64_t>(r12_28)) = rax29;
    rsi30 = *reinterpret_cast<void***>(rsi);
    rbx31 = *reinterpret_cast<void***>(rsi + 8);
    if (!rsi30 && rbx31) {
        rax29 = fun_4020d0("basic_string::_M_construct null not valid", rsi30);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp6) - 8 + 8);
    }
    rbp32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_23) + reinterpret_cast<uint64_t>(r12_28));
    r12_33 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r12_28) >> 5);
    if (reinterpret_cast<unsigned char>(rbx31) > reinterpret_cast<unsigned char>(15)) {
        rax29 = fun_401ef0(rbp32, reinterpret_cast<uint64_t>(rsp6) + 16);
        *reinterpret_cast<void***>(rbp32) = rax29;
        rcx21 = rbx31;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_23) + (r12_33 << 5) + 16) = rcx21;
        rsi30 = rsi30;
    }
    if (rbx31) {
        if (!reinterpret_cast<int1_t>(rbx31 == 1)) {
            fun_402240(rax29, rsi30, rbx31, rcx21, r8_34);
        } else {
            *reinterpret_cast<void***>(rax29) = *reinterpret_cast<void***>(rsi30);
        }
    }
    rax35 = rbx31;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_23) + (r12_33 << 5) + 8) = rax35;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp32)) + reinterpret_cast<unsigned char>(rax35)) = 0;
    rbx36 = *reinterpret_cast<void***>(r14_7);
    rcx37 = *reinterpret_cast<void***>(r14_7 + 8);
    if (rbx36 == rcx37) {
        r12_38 = r15_23 + 32;
    } else {
        rax39 = reinterpret_cast<uint64_t>(rcx37 + 0xffffffffffffffe0);
        *reinterpret_cast<int32_t*>(&rdx40) = 16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx40) + 4) = 0;
        do {
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_23) + reinterpret_cast<uint64_t>(rdx40) + 0xfffffffffffffff0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r15_23) + reinterpret_cast<uint64_t>(rdx40));
            rsi41 = reinterpret_cast<struct s13*>(reinterpret_cast<unsigned char>(rbx36) + reinterpret_cast<uint64_t>(rdx40));
            if (*reinterpret_cast<struct s13**>(reinterpret_cast<unsigned char>(rbx36) + reinterpret_cast<uint64_t>(rdx40) + 0xfffffffffffffff0) == rsi41) {
                __asm__("movups xmm0, [rdi]");
                __asm__("movups [r15+rdx], xmm0");
            } else {
                *reinterpret_cast<struct s13**>(reinterpret_cast<unsigned char>(r15_23) + reinterpret_cast<uint64_t>(rdx40) + 0xfffffffffffffff0) = *reinterpret_cast<struct s13**>(reinterpret_cast<unsigned char>(rbx36) + reinterpret_cast<uint64_t>(rdx40) + 0xfffffffffffffff0);
                *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r15_23) + reinterpret_cast<uint64_t>(rdx40)) = *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbx36) + reinterpret_cast<uint64_t>(rdx40));
            }
            *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r15_23) + reinterpret_cast<uint64_t>(rdx40) + 0xfffffffffffffff8) = *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi41) + 0xfffffffffffffff8);
            *reinterpret_cast<struct s13**>(reinterpret_cast<uint64_t>(rsi41) + 0xfffffffffffffff0) = rsi41;
            *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi41) + 0xfffffffffffffff8) = 0;
            rsi41->f0 = 0;
            rdx40 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx40) + 32);
        } while (!reinterpret_cast<int1_t>(&rsi41->f16 == rcx37));
        rax35 = reinterpret_cast<void**>(rax39 - reinterpret_cast<unsigned char>(rbx36) & 0xffffffffffffffe0);
        rbp42 = *reinterpret_cast<void***>(r14_7);
        rbx36 = *reinterpret_cast<void***>(r14_7 + 8);
        r12_38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax35) + reinterpret_cast<unsigned char>(r15_23) + 64);
        if (rbp42 != rbx36) 
            goto addr_4071d5_41;
    }
    addr_407204_42:
    if (rbx36) {
        rax35 = fun_401ec0(rbx36, rbx36);
    }
    *reinterpret_cast<void***>(r14_7) = r15_23;
    *reinterpret_cast<void***>(r14_7 + 8) = r12_38;
    *reinterpret_cast<void***>(r14_7 + 16) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r13_20) << 5) + reinterpret_cast<unsigned char>(r15_23));
    return rax35;
    addr_4071d5_41:
    do {
        rdi43 = *reinterpret_cast<void***>(rbp42);
        rbp44 = rbp42 + 16;
        if (rdi43 != rbp44) {
            rax35 = fun_401ec0(rdi43);
        }
        rbp42 = rbp44 + 16;
    } while (rbp42 != rbx36);
    rbx36 = *reinterpret_cast<void***>(r14_7);
    goto addr_407204_42;
    addr_406418_15:
    r15_45 = g4081d7;
    rcx46 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rdx18) - reinterpret_cast<unsigned char>(r15_45)) >> 3);
    *reinterpret_cast<int32_t*>(&rsi47) = 1;
    *reinterpret_cast<int32_t*>(&rsi47 + 4) = 0;
    if (rcx46) {
        rsi47 = rcx46;
    }
    r13_48 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi47) + reinterpret_cast<unsigned char>(rcx46));
    if (reinterpret_cast<uint64_t>(r13_48) >> 61) {
        r13_48 = reinterpret_cast<void*>(0x1fffffffffffffff);
    }
    tmp64_49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi47) + reinterpret_cast<unsigned char>(rcx46));
    if (reinterpret_cast<unsigned char>(tmp64_49) < reinterpret_cast<unsigned char>(rsi47)) {
        r13_48 = reinterpret_cast<void*>(0x1fffffffffffffff);
    }
    *reinterpret_cast<int32_t*>(&r12_50) = 0;
    *reinterpret_cast<int32_t*>(&r12_50 + 4) = 0;
    if (r13_48) {
        if (reinterpret_cast<uint64_t>(r13_48) > 0x1fffffffffffffff) {
            fun_4021a0();
            goto rax17;
        } else {
            rax51 = fun_402200(reinterpret_cast<uint64_t>(r13_48) * 8, tmp64_49, rdx18, rcx46);
            r12_50 = rax51;
            r15_45 = g4081d7;
            rdx18 = g4081df;
        }
    }
    rdx52 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx18) - reinterpret_cast<unsigned char>(r15_45));
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_50) + reinterpret_cast<uint64_t>(rdx52)) = rsi;
    if (reinterpret_cast<int64_t>(rdx52) >> 3) {
        fun_402040(r12_50, r15_45, rdx52);
    }
    if (r15_45) {
        fun_401ec0(r15_45, r15_45);
    }
    g4081d7 = r12_50;
    g4081df = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_50) + reinterpret_cast<uint64_t>(rdx52) + 8);
    g4081e7 = r12_50 + reinterpret_cast<uint64_t>(r13_48) * 8;
    addr_4064b4_63:
    goto rax53;
    addr_40640b_16:
    *reinterpret_cast<void***>(rdx18) = rsi;
    tmp64_54 = g4081df + 8;
    g4081df = tmp64_54;
    goto addr_4064b4_63;
}

/* DirNode::DirNode() */
void** _ZN7DirNodeC2Ev(void** rdi);

/* DirNode::set_name(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN7DirNode8set_nameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx);

/* pre_order_copy(DirNode*, DirNode*) */
void** _Z14pre_order_copyP7DirNodeS0_(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9, void** a7) {
    void** rbx8;
    void** rax9;
    void** r14_10;
    void* rsp11;
    void** rbp12;
    void* rsp13;
    void** v14;
    void** rsi15;
    int32_t eax16;
    void** rsp17;
    void** r12_18;
    int32_t ebp19;
    void** r15_20;
    void** v21;
    int32_t eax22;
    void** rax23;
    int32_t ebp24;
    void** rsi25;
    void** v26;
    void** rax27;
    void** v28;
    void** rax29;
    void** rax30;

    rbx8 = rdi;
    rax9 = fun_402200(88, rsi, rdx, rcx);
    r14_10 = rax9;
    _ZN7DirNodeC2Ev(r14_10);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 64 - 8 + 8 - 8 + 8);
    rbp12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp11) + 32);
    _ZNK7DirNode8get_nameEv(rbp12, rbx8, rdx, rcx, r8, r9);
    _ZN7DirNode8set_nameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(r14_10, rbp12, rdx);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8 - 8 + 8);
    if (v14 != reinterpret_cast<int64_t>(rsp13) + 48) {
        fun_401ec0(v14, v14);
        rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
    }
    rsi15 = rsi;
    _ZN7DirNode10set_parentEPS_(r14_10, rsi15, rdx);
    eax16 = _ZNK7DirNode9num_filesEv(rbx8, rsi15, rdx);
    rsp17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8 + 8);
    if (!(reinterpret_cast<uint1_t>(eax16 < 0) | reinterpret_cast<uint1_t>(eax16 == 0))) {
        r12_18 = rsp17 + 16;
        ebp19 = 0;
        r15_20 = rsp17;
        do {
            *reinterpret_cast<int32_t*>(&rdx) = ebp19;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            _ZNK7DirNode8get_fileEi(r15_20, rbx8, rdx);
            rsi15 = r15_20;
            _ZN7DirNode8add_fileENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(r14_10, rsi15, rdx);
            if (v21 != r12_18) {
                fun_401ec0(v21, v21);
            }
            ++ebp19;
            eax22 = _ZNK7DirNode9num_filesEv(rbx8, rsi15, rdx);
        } while (ebp19 < eax22);
    }
    rax23 = _ZNK7DirNode11num_subdirsEv(rbx8, rsi15, rdx);
    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax23) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax23) == 0))) {
        ebp24 = 0;
        do {
            *reinterpret_cast<int32_t*>(&rsi25) = ebp24;
            *reinterpret_cast<int32_t*>(&rsi25 + 4) = 0;
            rax27 = _ZNK7DirNode10get_subdirEi(rbx8, rsi25, rdx, rcx, r8, r9, v26);
            rax29 = _Z14pre_order_copyP7DirNodeS0_(rax27, r14_10, rdx, rcx, r8, r9, v28);
            _ZN7DirNode10add_subdirEPS_(r14_10, rax29, rdx);
            ++ebp24;
            rax30 = _ZNK7DirNode11num_subdirsEv(rbx8, rax29, rdx);
        } while (ebp24 < *reinterpret_cast<int32_t*>(&rax30));
    }
    return r14_10;
}

/* DirNode::~DirNode() */
void** _ZN7DirNodeD1Ev(void** rdi, void** rsi);

/* burner(DirNode*) */
void _Z6burnerP7DirNode(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9, void** a7) {
    void** v8;
    void** rax9;
    void** rbx10;
    void** rax11;
    int32_t ebp12;
    void** rax13;
    void** rax14;

    v8 = rax9;
    rbx10 = rdi;
    if (!rbx10) {
        return;
    } else {
        rax11 = _ZNK7DirNode11num_subdirsEv(rbx10, rsi, rdx);
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax11) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax11) == 0))) {
            ebp12 = 0;
            do {
                *reinterpret_cast<int32_t*>(&rsi) = ebp12;
                *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                rax13 = _ZNK7DirNode10get_subdirEi(rbx10, rsi, rdx, rcx, r8, r9, v8);
                _Z6burnerP7DirNode(rax13, rsi, rdx, rcx, r8, r9, v8);
                ++ebp12;
                rax14 = _ZNK7DirNode11num_subdirsEv(rbx10, rsi, rdx);
            } while (ebp12 < *reinterpret_cast<int32_t*>(&rax14));
        }
        _ZN7DirNodeD1Ev(rbx10, rsi);
        goto _ZdlPv;
    }
}

/* DirNode::~DirNode() */
void** _ZN7DirNodeD1Ev(void** rdi, void** rsi) {
    void** r14_3;
    void** r15_4;
    void** r12_5;
    void** rbx6;
    void** rdi7;
    void** rbx8;
    void** rdi9;
    void** rax10;
    void** rbx11;
    void** rdi12;
    void** rbx13;

    r14_3 = rdi;
    *reinterpret_cast<void***>(r14_3 + 8) = *reinterpret_cast<void***>(r14_3);
    r15_4 = *reinterpret_cast<void***>(r14_3 + 24);
    r12_5 = *reinterpret_cast<void***>(r14_3 + 32);
    if (r12_5 != r15_4) {
        rbx6 = r15_4;
        do {
            rdi7 = *reinterpret_cast<void***>(rbx6);
            rbx8 = rbx6 + 16;
            if (rdi7 != rbx8) {
                fun_401ec0(rdi7);
            }
            rbx6 = rbx8 + 16;
        } while (rbx6 != r12_5);
    }
    *reinterpret_cast<void***>(r14_3 + 32) = r15_4;
    *reinterpret_cast<void***>(r14_3 + 80) = reinterpret_cast<void**>(0);
    rdi9 = *reinterpret_cast<void***>(r14_3 + 48);
    rax10 = r14_3 + 64;
    if (rdi9 != rax10) {
        rax10 = fun_401ec0(rdi9);
        r15_4 = *reinterpret_cast<void***>(r14_3 + 32);
    }
    rbx11 = *reinterpret_cast<void***>(r14_3 + 24);
    if (rbx11 != r15_4) {
        do {
            rdi12 = *reinterpret_cast<void***>(rbx11);
            rbx13 = rbx11 + 16;
            if (rdi12 != rbx13) {
                rax10 = fun_401ec0(rdi12);
            }
            rbx11 = rbx13 + 16;
        } while (rbx11 != r15_4);
        r15_4 = *reinterpret_cast<void***>(r14_3 + 24);
    }
    if (r15_4) {
        rax10 = fun_401ec0(r15_4);
    }
    if (!*reinterpret_cast<void***>(r14_3)) {
        return rax10;
    } else {
        goto _ZdlPv;
    }
}

int64_t __cxa_allocate_exception = 0x4020a6;

void** fun_4020a0(int64_t rdi, void** rsi, void** rdx, ...) {
    goto __cxa_allocate_exception;
}

/* std::runtime_error::runtime_error(char const*) */
int64_t _ZNSt13runtime_errorC1EPKc = 0x401e76;

void fun_401e70(void** rdi, int64_t rsi, void** rdx, ...) {
    goto _ZNSt13runtime_errorC1EPKc;
}

/* std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char>, std::allocator<char> >(std::basic_istream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) */
int64_t _ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE = 0x4021d6;

void fun_4021d0(void** rdi, void** rsi, void** rdx) {
    goto _ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE;
}

/* std::__throw_logic_error(char const*) */
int64_t _ZSt19__throw_logic_errorPKc = 0x4020d6;

void** fun_4020d0(void** rdi, void** rsi, ...) {
    goto _ZSt19__throw_logic_errorPKc;
}

/* Index::query(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN5Index5queryENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, int32_t edx) {
    void** rsp4;
    void** r12_5;
    void** v6;
    void** r15_7;
    void** rbx8;
    void** rax9;
    void** rcx10;
    void** r8_11;
    void** rax12;
    void** rax13;
    void*** rsp14;
    void* rsp15;
    void** r15_16;
    void** r13_17;
    void** r12_18;
    void** r14_19;
    void** v20;
    void** rbx21;
    void** rbp22;
    void** rax23;
    void** rcx24;
    void** r8_25;
    void** rcx26;
    void** rdx27;
    void* rsp28;
    void** v29;
    void** rbx30;
    void** rax31;
    void** rsi32;
    void** rdx33;
    void** rdi34;
    int64_t rax35;
    void** rbp36;
    void** rax37;
    signed char al38;
    void** rsi39;
    int64_t rax40;
    void** v41;
    void** rbp42;
    void** rax43;
    void** v44;
    void** r8_45;
    void** v46;
    void** rbx47;
    int64_t rdi48;
    void** al49;
    void** rbx50;
    void** v51;
    int32_t v52;
    void** rax53;
    void** v54;
    void** rbp55;
    void** rax56;
    void** rdi57;
    void** rsi58;
    void** r8_59;
    int64_t r8_60;
    void** rax61;
    void** rsi62;
    void** rdx63;
    void** rdi64;
    int32_t eax65;
    int64_t rax66;
    void** rbx67;
    void** rax68;
    signed char al69;
    void** rsi70;
    int64_t rax71;
    void** rax72;
    void* rsp73;
    void** rbp74;
    void* rsp75;
    int32_t eax76;
    void** v77;
    void** rbp78;
    void** rax79;
    void** rdi80;
    void** rsi81;
    void** r8_82;
    int64_t r8_83;
    int64_t v84;
    void** v85;
    void** rax86;
    void** rdi87;
    void** rsi88;
    void** r8_89;
    int64_t r8_90;
    void** rax91;
    void** rsi92;
    void** rdi93;
    void* rsp94;
    int32_t eax95;
    int64_t rax96;
    void** rbx97;
    void** rax98;
    signed char al99;
    void** rsi100;
    int64_t rax101;
    void** r15_102;
    void** r14_103;
    void** v104;
    void** rcx105;
    void* rax106;
    void** rsi107;
    void** rax108;
    void* rsp109;
    void** rbp110;
    void** rax111;
    signed char al112;
    void** rsi113;
    int64_t rax114;
    void** rax115;
    void** v116;

    rsp4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 40);
    r12_5 = rsp4 + 16;
    v6 = r12_5;
    r15_7 = *reinterpret_cast<void***>(rsi);
    rbx8 = *reinterpret_cast<void***>(rsi + 8);
    if (r15_7 || !rbx8) {
        if (reinterpret_cast<unsigned char>(rbx8) <= reinterpret_cast<unsigned char>(15)) {
            rax9 = r12_5;
        } else {
            rax9 = fun_401ef0(rsp4, rsp4 + 32);
            rsp4 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp4 - 8) + 8);
            v6 = rax9;
            rcx10 = rbx8;
        }
        if (rbx8) {
            if (!reinterpret_cast<int1_t>(rbx8 == 1)) {
                fun_402240(rax9, r15_7, rbx8, rcx10, r8_11);
                rsp4 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp4 - 8) + 8);
            } else {
                *reinterpret_cast<void***>(rax9) = *reinterpret_cast<void***>(r15_7);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<unsigned char>(rbx8)) = 0;
        rax12 = _ZN5Index5queryENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb(rdi, rsp4, 0);
        if (v6 != r12_5) {
            rax12 = fun_401ec0(v6, v6);
        }
        return rax12;
    }
    rax13 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
    rsp14 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp4 - 8) + 8);
    if (v6 != r12_5) {
        fun_401ec0(v6);
        rsp14 = rsp14 - 8 + 8;
    }
    fun_402210(rax13, rsi);
    rsp15 = reinterpret_cast<void*>(rsp14 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x148);
    *reinterpret_cast<int32_t*>(&r15_16) = edx;
    *reinterpret_cast<int32_t*>(&r15_16 + 4) = 0;
    r13_17 = rsi;
    r12_18 = rax13;
    r14_19 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0x108);
    v20 = r14_19;
    rbx21 = *reinterpret_cast<void***>(r13_17);
    rbp22 = *reinterpret_cast<void***>(r13_17 + 8);
    if (rbx21) 
        goto addr_404590_16;
    if (rbp22) 
        goto addr_404d27_18;
    addr_404590_16:
    if (reinterpret_cast<unsigned char>(rbp22) <= reinterpret_cast<unsigned char>(15)) {
        rax23 = r14_19;
    } else {
        rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0x138);
        rax23 = fun_401ef0(reinterpret_cast<uint64_t>(rsp15) + 0xf8, rsi);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
        v20 = rax23;
        rcx24 = rbp22;
    }
    if (rbp22) {
        if (!reinterpret_cast<int1_t>(rbp22 == 1)) {
            rsi = rbx21;
            fun_402240(rax23, rsi, rbp22, rcx24, r8_25);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
        } else {
            *reinterpret_cast<void***>(rax23) = *reinterpret_cast<void***>(rbx21);
        }
    }
    rcx26 = v20;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx26) + reinterpret_cast<unsigned char>(rbp22)) = 0;
    rdx27 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0xf8);
    _ZN5Index16stripNonAlphaNumENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<uint64_t>(rsp15) + 0x118, rsi, rdx27);
    rsp28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
    rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp28) + 0x118);
    fun_402000(r13_17, rsi, rdx27);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) - 8 + 8);
    if (v29 != reinterpret_cast<uint64_t>(rsp15) + 0x128) {
        fun_401ec0(v29, v29);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
    }
    if (v20 != r14_19) {
        fun_401ec0(v20, v20);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
    }
    rbx21 = *reinterpret_cast<void***>(r13_17 + 8);
    if (rbx21) 
        goto addr_404667_30;
    rbx30 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0xe8);
    rax31 = fun_402020(0x60b560, rbx30, 2);
    *reinterpret_cast<int32_t*>(&rsi32) = reinterpret_cast<int32_t>(" Not Found.");
    *reinterpret_cast<int32_t*>(&rsi32 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx33) = 11;
    *reinterpret_cast<int32_t*>(&rdx33 + 4) = 0;
    rdi34 = rax31;
    fun_402020(rdi34, " Not Found.", 11);
    if (!*reinterpret_cast<signed char*>(&r15_16)) {
        *reinterpret_cast<int32_t*>(&rdi34) = 0x60b560;
        *reinterpret_cast<int32_t*>(&rdi34 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi32) = reinterpret_cast<int32_t>(" Try with @insensitive or @i.");
        *reinterpret_cast<int32_t*>(&rsi32 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx33) = 29;
        *reinterpret_cast<int32_t*>(&rdx33 + 4) = 0;
        fun_402020(0x60b560, " Try with @insensitive or @i.", 29);
    }
    rax35 = _ZSt4cout;
    rbp36 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax35 - 24) + 0x60b650);
    if (!rbp36) {
        fun_401e80(rdi34, rsi32, rdx33);
    }
    if (!*reinterpret_cast<void***>(rbp36 + 56)) {
        fun_401ee0(rbp36, rsi32, rdx33);
        rax37 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbp36) + 48);
        al38 = reinterpret_cast<signed char>(rax37(rbp36, 10, rdx33));
    } else {
        al38 = *reinterpret_cast<signed char*>(rbp36 + 67);
    }
    *reinterpret_cast<int32_t*>(&rsi39) = al38;
    *reinterpret_cast<int32_t*>(&rsi39 + 4) = 0;
    rax40 = fun_402230(0x60b560, rsi39, rdx33);
    fun_402070(rax40, rsi39, rdx33);
    if (rbx30 != rbx30) {
        fun_401ec0(rbx30, rbx30);
    }
    addr_404cfb_40:
    goto v6;
    addr_404667_30:
    r14_19 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0xa8);
    v41 = r14_19;
    rbp42 = *reinterpret_cast<void***>(r13_17);
    if (!rbp42) 
        goto addr_404d27_18;
    if (reinterpret_cast<unsigned char>(rbx21) <= reinterpret_cast<unsigned char>(15)) {
        rax43 = r14_19;
    } else {
        rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0x138);
        *reinterpret_cast<int32_t*>(&rdx27) = 0;
        *reinterpret_cast<int32_t*>(&rdx27 + 4) = 0;
        rax43 = fun_401ef0(reinterpret_cast<uint64_t>(rsp15) + 0x98, rsi);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
        v41 = rax43;
        rcx26 = rbx21;
        v44 = rcx26;
    }
    if (!reinterpret_cast<int1_t>(rbx21 == 1)) {
        rsi = rbp42;
        rdx27 = rbx21;
        fun_402240(rax43, rsi, rdx27, rcx26, r8_45);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
    } else {
        *reinterpret_cast<void***>(rax43) = *reinterpret_cast<void***>(rbp42);
    }
    v46 = rbx21;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v41) + reinterpret_cast<unsigned char>(rbx21)) = 0;
    rbx47 = v41;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v46) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v46 == 0)) {
        rcx26 = rbx47;
    } else {
        do {
            *reinterpret_cast<int32_t*>(&rdi48) = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx47));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = 0;
            al49 = fun_402090(rdi48, rsi, rdx27);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
            *reinterpret_cast<void***>(rbx47) = al49;
            ++rbx47;
            rcx26 = v41;
            rdx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx26) + reinterpret_cast<unsigned char>(v46));
        } while (reinterpret_cast<unsigned char>(rbx47) < reinterpret_cast<unsigned char>(rdx27));
    }
    rbx50 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0xc8);
    v51 = rbx50;
    if (rcx26 == r14_19) {
        v52 = *reinterpret_cast<int32_t*>(&r15_16);
        __asm__("movups xmm0, [r14]");
        __asm__("movups [rbx], xmm0");
    } else {
        v52 = *reinterpret_cast<int32_t*>(&r15_16);
        v51 = rcx26;
        rcx26 = v44;
    }
    rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0xb8);
    rax53 = _ZN5Index12getIndexListENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(r12_18, rsi, rdx27);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
    r15_16 = rax53;
    if (v51 != rbx50) {
        fun_401ec0(v51, v51);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
    }
    if (r14_19 != r14_19) {
        fun_401ec0(r14_19, r14_19);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
    }
    if (r15_16) 
        goto addr_40488b_60;
    r15_16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0x88);
    v54 = r15_16;
    rbx21 = *reinterpret_cast<void***>(r13_17);
    rbp55 = *reinterpret_cast<void***>(r13_17 + 8);
    if (rbx21 || !rbp55) {
        if (reinterpret_cast<unsigned char>(rbp55) <= reinterpret_cast<unsigned char>(15)) {
            rax56 = r15_16;
        } else {
            rdi57 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0x78);
            rsi58 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0x138);
            rax56 = fun_401ef0(rdi57, rsi58, rdi57, rsi58);
            v54 = rax56;
            rcx26 = rbp55;
        }
        if (rbp55) {
            if (!reinterpret_cast<int1_t>(rbp55 == 1)) {
                fun_402240(rax56, rbx21, rbp55, rcx26, r8_59, rax56, rbx21, rbp55, rcx26, r8_60);
            } else {
                *reinterpret_cast<void***>(rax56) = *reinterpret_cast<void***>(rbx21);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v54) + reinterpret_cast<unsigned char>(rbp55)) = 0;
        rax61 = fun_402020(0x60b560, v54, rbp55);
        *reinterpret_cast<int32_t*>(&rsi62) = reinterpret_cast<int32_t>(" Not Found.");
        *reinterpret_cast<int32_t*>(&rsi62 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx63) = 11;
        *reinterpret_cast<int32_t*>(&rdx63 + 4) = 0;
        rdi64 = rax61;
        fun_402020(rdi64, " Not Found.", 11);
        eax65 = v52;
        if (!*reinterpret_cast<signed char*>(&eax65)) {
            *reinterpret_cast<int32_t*>(&rdi64) = 0x60b560;
            *reinterpret_cast<int32_t*>(&rdi64 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi62) = reinterpret_cast<int32_t>(" Try with @insensitive or @i.");
            *reinterpret_cast<int32_t*>(&rsi62 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx63) = 29;
            *reinterpret_cast<int32_t*>(&rdx63 + 4) = 0;
            fun_402020(0x60b560, " Try with @insensitive or @i.", 29);
        }
        rax66 = _ZSt4cout;
        rbx67 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax66 - 24) + 0x60b650);
        if (!rbx67) {
            fun_401e80(rdi64, rsi62, rdx63);
        }
        if (!*reinterpret_cast<void***>(rbx67 + 56)) {
            fun_401ee0(rbx67, rsi62, rdx63);
            rax68 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx67) + 48);
            al69 = reinterpret_cast<signed char>(rax68(rbx67, 10, rdx63));
        } else {
            al69 = *reinterpret_cast<signed char*>(rbx67 + 67);
        }
        *reinterpret_cast<int32_t*>(&rsi70) = al69;
        *reinterpret_cast<int32_t*>(&rsi70 + 4) = 0;
        rax71 = fun_402230(0x60b560, rsi70, rdx63);
        fun_402070(rax71, rsi70, rdx63);
        if (v54 != r15_16) {
            fun_401ec0(v54, v54);
            goto addr_404cfb_40;
        }
    } else {
        addr_404d27_18:
        rax72 = fun_4020d0("basic_string::_M_construct null not valid", rsi, "basic_string::_M_construct null not valid", rsi);
        rsp73 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
        rbp74 = rax72;
    }
    if (v20 != r14_19) {
        fun_401ec0(v20, v20);
        rsp73 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp73) - 8 + 8);
    }
    fun_402210(rbp74, rsi, rbp74, rsi);
    rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp73) - 8 + 8);
    goto addr_404dac_81;
    addr_40488b_60:
    eax76 = v52;
    if (!*reinterpret_cast<signed char*>(&eax76)) {
        r14_19 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 56);
        v77 = r14_19;
        rbx21 = *reinterpret_cast<void***>(r13_17);
        rbp78 = *reinterpret_cast<void***>(r13_17 + 8);
        if (rbx21) 
            goto addr_404928_83;
        if (rbp78) 
            goto addr_404d27_18;
        addr_404928_83:
        if (reinterpret_cast<unsigned char>(rbp78) <= reinterpret_cast<unsigned char>(15)) {
            rax79 = r14_19;
        } else {
            rdi80 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 40);
            rsi81 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 0x138);
            rax79 = fun_401ef0(rdi80, rsi81, rdi80, rsi81);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
            v77 = rax79;
            rcx26 = rbp78;
        }
        if (rbp78) {
            if (!reinterpret_cast<int1_t>(rbp78 == 1)) {
                fun_402240(rax79, rbx21, rbp78, rcx26, r8_82, rax79, rbx21, rbp78, rcx26, r8_83);
                rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax79) = *reinterpret_cast<void***>(rbx21);
            }
        }
        rcx26 = v77;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx26) + reinterpret_cast<unsigned char>(rbp78)) = 0;
        rdx27 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15) + 40);
        rsi = r15_16;
        _ZN9IndexList16sensitiveIndicesENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<uint64_t>(rsp15) + 72, rsi, rdx27);
        rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
        if (v77 != r14_19) {
            fun_401ec0(v77, v77);
            rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp75) - 8 + 8);
        }
    } else {
        rsi = r15_16;
        _ZN9IndexList18insensitiveIndicesEv(reinterpret_cast<uint64_t>(rsp15) + 72, rsi, rdx27);
        rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
    }
    if (!v84) {
        r15_16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp75) + 24);
        v85 = r15_16;
        rbx21 = *reinterpret_cast<void***>(r13_17);
        rbp74 = *reinterpret_cast<void***>(r13_17 + 8);
        if (rbx21 || !rbp74) {
            addr_404bd9_96:
            if (reinterpret_cast<unsigned char>(rbp74) <= reinterpret_cast<unsigned char>(15)) {
                rax86 = r15_16;
            } else {
                rdi87 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp75) + 8);
                rsi88 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp75) + 0x140);
                rax86 = fun_401ef0(rdi87, rsi88, rdi87, rsi88);
                rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp75) - 8 + 8);
                v85 = rax86;
                rcx26 = rbp74;
            }
        } else {
            addr_404dac_81:
            fun_4020d0("basic_string::_M_construct null not valid", rsi, "basic_string::_M_construct null not valid", rsi);
            rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp75) - 8 + 8);
            goto addr_404bd9_96;
        }
        if (rbp74) {
            if (!reinterpret_cast<int1_t>(rbp74 == 1)) {
                fun_402240(rax86, rbx21, rbp74, rcx26, r8_89, rax86, rbx21, rbp74, rcx26, r8_90);
                rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp75) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax86) = *reinterpret_cast<void***>(rbx21);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v85) + reinterpret_cast<unsigned char>(rbp74)) = 0;
        rax91 = fun_402020(0x60b560, v85, rbp74);
        *reinterpret_cast<int32_t*>(&rsi92) = reinterpret_cast<int32_t>(" Not Found.");
        *reinterpret_cast<int32_t*>(&rsi92 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx27) = 11;
        *reinterpret_cast<int32_t*>(&rdx27 + 4) = 0;
        rdi93 = rax91;
        fun_402020(rdi93, " Not Found.", 11);
        rsp94 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp75) - 8 + 8 - 8 + 8);
        eax95 = v52;
        if (!*reinterpret_cast<signed char*>(&eax95)) {
            *reinterpret_cast<int32_t*>(&rdi93) = 0x60b560;
            *reinterpret_cast<int32_t*>(&rdi93 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi92) = reinterpret_cast<int32_t>(" Try with @insensitive or @i.");
            *reinterpret_cast<int32_t*>(&rsi92 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx27) = 29;
            *reinterpret_cast<int32_t*>(&rdx27 + 4) = 0;
            fun_402020(0x60b560, " Try with @insensitive or @i.", 29);
            rsp94 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp94) - 8 + 8);
        }
        rax96 = _ZSt4cout;
        rbx97 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax96 - 24) + 0x60b650);
        if (!rbx97) {
            fun_401e80(rdi93, rsi92, rdx27);
            rsp94 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp94) - 8 + 8);
        }
        if (!*reinterpret_cast<void***>(rbx97 + 56)) {
            fun_401ee0(rbx97, rsi92, rdx27);
            rax98 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx97) + 48);
            al99 = reinterpret_cast<signed char>(rax98(rbx97, 10, rdx27));
            rsp94 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp94) - 8 + 8 - 8 + 8);
        } else {
            al99 = *reinterpret_cast<signed char*>(rbx97 + 67);
        }
        *reinterpret_cast<int32_t*>(&rsi100) = al99;
        *reinterpret_cast<int32_t*>(&rsi100 + 4) = 0;
        rax101 = fun_402230(0x60b560, rsi100, rdx27);
        fun_402070(rax101, rsi100, rdx27);
        rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp94) - 8 + 8 - 8 + 8);
        if (v85 != r15_16) {
            fun_401ec0(v85, v85);
            rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp75) - 8 + 8);
        }
    } else {
        r15_102 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp75) + 80);
        r14_103 = v104;
        while (r14_103 != r15_102) {
            rcx105 = *reinterpret_cast<void***>(r12_18 + 40);
            rax106 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r14_103 + 32)))) << 5);
            rsi107 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx105) + reinterpret_cast<uint64_t>(rax106));
            rdx27 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx105) + reinterpret_cast<uint64_t>(rax106) + 8);
            rax108 = fun_402020(0x60b560, rsi107, rdx27);
            rsp109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp75) - 8 + 8);
            rbp110 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax108) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(*reinterpret_cast<void***>(rax108) + 0xffffffffffffffe8)) + 0xf0);
            if (!rbp110) {
                fun_401e80(0x60b560, rsi107, rdx27);
                rsp109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp109) - 8 + 8);
            }
            if (!*reinterpret_cast<void***>(rbp110 + 56)) {
                fun_401ee0(rbp110, rsi107, rdx27);
                rax111 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbp110) + 48);
                al112 = reinterpret_cast<signed char>(rax111(rbp110, 10, rdx27));
                rsp109 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp109) - 8 + 8 - 8 + 8);
            } else {
                al112 = *reinterpret_cast<signed char*>(rbp110 + 67);
            }
            *reinterpret_cast<int32_t*>(&rsi113) = al112;
            *reinterpret_cast<int32_t*>(&rsi113 + 4) = 0;
            rax114 = fun_402230(rax108, rsi113, rdx27);
            fun_402070(rax114, rsi113, rdx27);
            rax115 = fun_401fe0(r14_103, rsi113, rdx27, rcx105);
            rsp75 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp109) - 8 + 8 - 8 + 8 - 8 + 8);
            r14_103 = rax115;
        }
    }
    _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(reinterpret_cast<uint64_t>(rsp75) + 72, v116, rdx27);
    goto addr_404cfb_40;
}

/* Index::query(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool) */
void** _ZN5Index5queryENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb(void** rdi, void** rsi, int32_t edx) {
    void* rsp4;
    void** r15_5;
    void** r13_6;
    void** r12_7;
    void** r14_8;
    void** v9;
    void** rbx10;
    void** rbp11;
    void** rax12;
    void** rcx13;
    void** r8_14;
    void** rcx15;
    void** rdx16;
    void* rsp17;
    void** v18;
    void** rbx19;
    void** rax20;
    void** rsi21;
    void** rdx22;
    void** rdi23;
    int64_t rax24;
    void** rbp25;
    void** rax26;
    signed char al27;
    void** rsi28;
    int64_t rax29;
    void** rax30;
    void** v31;
    void** rbp32;
    void** rax33;
    void** v34;
    void** r8_35;
    void** v36;
    void** rbx37;
    int64_t rdi38;
    void** al39;
    void** rbx40;
    void** v41;
    int32_t v42;
    void** rax43;
    void** v44;
    void** rbp45;
    void** rax46;
    void** rdi47;
    void** rsi48;
    void** r8_49;
    int64_t r8_50;
    void** rax51;
    void** rsi52;
    void** rdx53;
    void** rdi54;
    int32_t eax55;
    int64_t rax56;
    void** rbx57;
    void** rax58;
    signed char al59;
    void** rsi60;
    int64_t rax61;
    void** rax62;
    void* rsp63;
    void** rbp64;
    void* rsp65;
    int32_t eax66;
    void** v67;
    void** rbp68;
    void** rax69;
    void** rdi70;
    void** rsi71;
    void** r8_72;
    int64_t r8_73;
    int64_t v74;
    void** v75;
    void** rax76;
    void** rdi77;
    void** rsi78;
    void** r8_79;
    int64_t r8_80;
    void** rax81;
    void** rsi82;
    void** rdi83;
    void* rsp84;
    int32_t eax85;
    int64_t rax86;
    void** rbx87;
    void** rax88;
    signed char al89;
    void** rsi90;
    int64_t rax91;
    void** r15_92;
    void** r14_93;
    void** v94;
    void** rcx95;
    void* rax96;
    void** rsi97;
    void** rax98;
    void* rsp99;
    void** rbp100;
    void** rax101;
    signed char al102;
    void** rsi103;
    int64_t rax104;
    void** rax105;
    void** v106;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x148);
    *reinterpret_cast<int32_t*>(&r15_5) = edx;
    *reinterpret_cast<int32_t*>(&r15_5 + 4) = 0;
    r13_6 = rsi;
    r12_7 = rdi;
    r14_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x108);
    v9 = r14_8;
    rbx10 = *reinterpret_cast<void***>(r13_6);
    rbp11 = *reinterpret_cast<void***>(r13_6 + 8);
    if (rbx10) 
        goto addr_404590_2;
    if (rbp11) 
        goto addr_404d27_4;
    addr_404590_2:
    if (reinterpret_cast<unsigned char>(rbp11) <= reinterpret_cast<unsigned char>(15)) {
        rax12 = r14_8;
    } else {
        rsi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x138);
        rax12 = fun_401ef0(reinterpret_cast<int64_t>(rsp4) + 0xf8, rsi);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        v9 = rax12;
        rcx13 = rbp11;
    }
    if (rbp11) {
        if (!reinterpret_cast<int1_t>(rbp11 == 1)) {
            rsi = rbx10;
            fun_402240(rax12, rsi, rbp11, rcx13, r8_14);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        } else {
            *reinterpret_cast<void***>(rax12) = *reinterpret_cast<void***>(rbx10);
        }
    }
    rcx15 = v9;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx15) + reinterpret_cast<unsigned char>(rbp11)) = 0;
    rdx16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0xf8);
    _ZN5Index16stripNonAlphaNumENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<int64_t>(rsp4) + 0x118, rsi, rdx16);
    rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    rsi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp17) + 0x118);
    fun_402000(r13_6, rsi, rdx16);
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8);
    if (v18 != reinterpret_cast<int64_t>(rsp4) + 0x128) {
        fun_401ec0(v18, v18);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    }
    if (v9 != r14_8) {
        fun_401ec0(v9, v9);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    }
    rbx10 = *reinterpret_cast<void***>(r13_6 + 8);
    if (rbx10) 
        goto addr_404667_16;
    rbx19 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0xe8);
    rax20 = fun_402020(0x60b560, rbx19, 2);
    *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(" Not Found.");
    *reinterpret_cast<int32_t*>(&rsi21 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx22) = 11;
    *reinterpret_cast<int32_t*>(&rdx22 + 4) = 0;
    rdi23 = rax20;
    fun_402020(rdi23, " Not Found.", 11);
    if (!*reinterpret_cast<signed char*>(&r15_5)) {
        *reinterpret_cast<int32_t*>(&rdi23) = 0x60b560;
        *reinterpret_cast<int32_t*>(&rdi23 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(" Try with @insensitive or @i.");
        *reinterpret_cast<int32_t*>(&rsi21 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx22) = 29;
        *reinterpret_cast<int32_t*>(&rdx22 + 4) = 0;
        fun_402020(0x60b560, " Try with @insensitive or @i.", 29);
    }
    rax24 = _ZSt4cout;
    rbp25 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax24 - 24) + 0x60b650);
    if (!rbp25) {
        fun_401e80(rdi23, rsi21, rdx22);
    }
    if (!*reinterpret_cast<void***>(rbp25 + 56)) {
        fun_401ee0(rbp25, rsi21, rdx22);
        rax26 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbp25) + 48);
        al27 = reinterpret_cast<signed char>(rax26(rbp25, 10, rdx22));
    } else {
        al27 = *reinterpret_cast<signed char*>(rbp25 + 67);
    }
    *reinterpret_cast<int32_t*>(&rsi28) = al27;
    *reinterpret_cast<int32_t*>(&rsi28 + 4) = 0;
    rax29 = fun_402230(0x60b560, rsi28, rdx22);
    rax30 = fun_402070(rax29, rsi28, rdx22);
    if (rbx19 != rbx19) {
        rax30 = fun_401ec0(rbx19, rbx19);
    }
    addr_404cfb_26:
    return rax30;
    addr_404667_16:
    r14_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0xa8);
    v31 = r14_8;
    rbp32 = *reinterpret_cast<void***>(r13_6);
    if (!rbp32) 
        goto addr_404d27_4;
    if (reinterpret_cast<unsigned char>(rbx10) <= reinterpret_cast<unsigned char>(15)) {
        rax33 = r14_8;
    } else {
        rsi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x138);
        *reinterpret_cast<int32_t*>(&rdx16) = 0;
        *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
        rax33 = fun_401ef0(reinterpret_cast<int64_t>(rsp4) + 0x98, rsi);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        v31 = rax33;
        rcx15 = rbx10;
        v34 = rcx15;
    }
    if (!reinterpret_cast<int1_t>(rbx10 == 1)) {
        rsi = rbp32;
        rdx16 = rbx10;
        fun_402240(rax33, rsi, rdx16, rcx15, r8_35);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    } else {
        *reinterpret_cast<void***>(rax33) = *reinterpret_cast<void***>(rbp32);
    }
    v36 = rbx10;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<unsigned char>(rbx10)) = 0;
    rbx37 = v31;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v36) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v36 == 0)) {
        rcx15 = rbx37;
    } else {
        do {
            *reinterpret_cast<int32_t*>(&rdi38) = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx37));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = 0;
            al39 = fun_402090(rdi38, rsi, rdx16);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            *reinterpret_cast<void***>(rbx37) = al39;
            ++rbx37;
            rcx15 = v31;
            rdx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx15) + reinterpret_cast<unsigned char>(v36));
        } while (reinterpret_cast<unsigned char>(rbx37) < reinterpret_cast<unsigned char>(rdx16));
    }
    rbx40 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0xc8);
    v41 = rbx40;
    if (rcx15 == r14_8) {
        v42 = *reinterpret_cast<int32_t*>(&r15_5);
        __asm__("movups xmm0, [r14]");
        __asm__("movups [rbx], xmm0");
    } else {
        v42 = *reinterpret_cast<int32_t*>(&r15_5);
        v41 = rcx15;
        rcx15 = v34;
    }
    rsi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0xb8);
    rax43 = _ZN5Index12getIndexListENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(r12_7, rsi, rdx16);
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    r15_5 = rax43;
    if (v41 != rbx40) {
        fun_401ec0(v41, v41);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    }
    if (r14_8 != r14_8) {
        fun_401ec0(r14_8, r14_8);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    }
    if (r15_5) 
        goto addr_40488b_46;
    r15_5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x88);
    v44 = r15_5;
    rbx10 = *reinterpret_cast<void***>(r13_6);
    rbp45 = *reinterpret_cast<void***>(r13_6 + 8);
    if (rbx10 || !rbp45) {
        if (reinterpret_cast<unsigned char>(rbp45) <= reinterpret_cast<unsigned char>(15)) {
            rax46 = r15_5;
        } else {
            rdi47 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x78);
            rsi48 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x138);
            rax46 = fun_401ef0(rdi47, rsi48, rdi47, rsi48);
            v44 = rax46;
            rcx15 = rbp45;
        }
        if (rbp45) {
            if (!reinterpret_cast<int1_t>(rbp45 == 1)) {
                fun_402240(rax46, rbx10, rbp45, rcx15, r8_49, rax46, rbx10, rbp45, rcx15, r8_50);
            } else {
                *reinterpret_cast<void***>(rax46) = *reinterpret_cast<void***>(rbx10);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v44) + reinterpret_cast<unsigned char>(rbp45)) = 0;
        rax51 = fun_402020(0x60b560, v44, rbp45);
        *reinterpret_cast<int32_t*>(&rsi52) = reinterpret_cast<int32_t>(" Not Found.");
        *reinterpret_cast<int32_t*>(&rsi52 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx53) = 11;
        *reinterpret_cast<int32_t*>(&rdx53 + 4) = 0;
        rdi54 = rax51;
        fun_402020(rdi54, " Not Found.", 11);
        eax55 = v42;
        if (!*reinterpret_cast<signed char*>(&eax55)) {
            *reinterpret_cast<int32_t*>(&rdi54) = 0x60b560;
            *reinterpret_cast<int32_t*>(&rdi54 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi52) = reinterpret_cast<int32_t>(" Try with @insensitive or @i.");
            *reinterpret_cast<int32_t*>(&rsi52 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx53) = 29;
            *reinterpret_cast<int32_t*>(&rdx53 + 4) = 0;
            fun_402020(0x60b560, " Try with @insensitive or @i.", 29);
        }
        rax56 = _ZSt4cout;
        rbx57 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax56 - 24) + 0x60b650);
        if (!rbx57) {
            fun_401e80(rdi54, rsi52, rdx53);
        }
        if (!*reinterpret_cast<void***>(rbx57 + 56)) {
            fun_401ee0(rbx57, rsi52, rdx53);
            rax58 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx57) + 48);
            al59 = reinterpret_cast<signed char>(rax58(rbx57, 10, rdx53));
        } else {
            al59 = *reinterpret_cast<signed char*>(rbx57 + 67);
        }
        *reinterpret_cast<int32_t*>(&rsi60) = al59;
        *reinterpret_cast<int32_t*>(&rsi60 + 4) = 0;
        rax61 = fun_402230(0x60b560, rsi60, rdx53);
        rax30 = fun_402070(rax61, rsi60, rdx53);
        if (v44 != r15_5) {
            rax30 = fun_401ec0(v44, v44);
            goto addr_404cfb_26;
        }
    } else {
        addr_404d27_4:
        rax62 = fun_4020d0("basic_string::_M_construct null not valid", rsi, "basic_string::_M_construct null not valid", rsi);
        rsp63 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        rbp64 = rax62;
    }
    if (v9 != r14_8) {
        fun_401ec0(v9, v9);
        rsp63 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp63) - 8 + 8);
    }
    fun_402210(rbp64, rsi, rbp64, rsi);
    rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp63) - 8 + 8);
    goto addr_404dac_67;
    addr_40488b_46:
    eax66 = v42;
    if (!*reinterpret_cast<signed char*>(&eax66)) {
        r14_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 56);
        v67 = r14_8;
        rbx10 = *reinterpret_cast<void***>(r13_6);
        rbp68 = *reinterpret_cast<void***>(r13_6 + 8);
        if (rbx10) 
            goto addr_404928_69;
        if (rbp68) 
            goto addr_404d27_4;
        addr_404928_69:
        if (reinterpret_cast<unsigned char>(rbp68) <= reinterpret_cast<unsigned char>(15)) {
            rax69 = r14_8;
        } else {
            rdi70 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 40);
            rsi71 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x138);
            rax69 = fun_401ef0(rdi70, rsi71, rdi70, rsi71);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            v67 = rax69;
            rcx15 = rbp68;
        }
        if (rbp68) {
            if (!reinterpret_cast<int1_t>(rbp68 == 1)) {
                fun_402240(rax69, rbx10, rbp68, rcx15, r8_72, rax69, rbx10, rbp68, rcx15, r8_73);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax69) = *reinterpret_cast<void***>(rbx10);
            }
        }
        rcx15 = v67;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx15) + reinterpret_cast<unsigned char>(rbp68)) = 0;
        rdx16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 40);
        rsi = r15_5;
        _ZN9IndexList16sensitiveIndicesENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<int64_t>(rsp4) + 72, rsi, rdx16);
        rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        if (v67 != r14_8) {
            fun_401ec0(v67, v67);
            rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp65) - 8 + 8);
        }
    } else {
        rsi = r15_5;
        _ZN9IndexList18insensitiveIndicesEv(reinterpret_cast<int64_t>(rsp4) + 72, rsi, rdx16);
        rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    }
    if (!v74) {
        r15_5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp65) + 24);
        v75 = r15_5;
        rbx10 = *reinterpret_cast<void***>(r13_6);
        rbp64 = *reinterpret_cast<void***>(r13_6 + 8);
        if (rbx10 || !rbp64) {
            addr_404bd9_82:
            if (reinterpret_cast<unsigned char>(rbp64) <= reinterpret_cast<unsigned char>(15)) {
                rax76 = r15_5;
            } else {
                rdi77 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp65) + 8);
                rsi78 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp65) + 0x140);
                rax76 = fun_401ef0(rdi77, rsi78, rdi77, rsi78);
                rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp65) - 8 + 8);
                v75 = rax76;
                rcx15 = rbp64;
            }
        } else {
            addr_404dac_67:
            fun_4020d0("basic_string::_M_construct null not valid", rsi, "basic_string::_M_construct null not valid", rsi);
            rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp65) - 8 + 8);
            goto addr_404bd9_82;
        }
        if (rbp64) {
            if (!reinterpret_cast<int1_t>(rbp64 == 1)) {
                fun_402240(rax76, rbx10, rbp64, rcx15, r8_79, rax76, rbx10, rbp64, rcx15, r8_80);
                rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp65) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax76) = *reinterpret_cast<void***>(rbx10);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v75) + reinterpret_cast<unsigned char>(rbp64)) = 0;
        rax81 = fun_402020(0x60b560, v75, rbp64);
        *reinterpret_cast<int32_t*>(&rsi82) = reinterpret_cast<int32_t>(" Not Found.");
        *reinterpret_cast<int32_t*>(&rsi82 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx16) = 11;
        *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
        rdi83 = rax81;
        fun_402020(rdi83, " Not Found.", 11);
        rsp84 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp65) - 8 + 8 - 8 + 8);
        eax85 = v42;
        if (!*reinterpret_cast<signed char*>(&eax85)) {
            *reinterpret_cast<int32_t*>(&rdi83) = 0x60b560;
            *reinterpret_cast<int32_t*>(&rdi83 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi82) = reinterpret_cast<int32_t>(" Try with @insensitive or @i.");
            *reinterpret_cast<int32_t*>(&rsi82 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx16) = 29;
            *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
            fun_402020(0x60b560, " Try with @insensitive or @i.", 29);
            rsp84 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp84) - 8 + 8);
        }
        rax86 = _ZSt4cout;
        rbx87 = *reinterpret_cast<void***>(*reinterpret_cast<int64_t*>(rax86 - 24) + 0x60b650);
        if (!rbx87) {
            fun_401e80(rdi83, rsi82, rdx16);
            rsp84 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp84) - 8 + 8);
        }
        if (!*reinterpret_cast<void***>(rbx87 + 56)) {
            fun_401ee0(rbx87, rsi82, rdx16);
            rax88 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx87) + 48);
            al89 = reinterpret_cast<signed char>(rax88(rbx87, 10, rdx16));
            rsp84 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp84) - 8 + 8 - 8 + 8);
        } else {
            al89 = *reinterpret_cast<signed char*>(rbx87 + 67);
        }
        *reinterpret_cast<int32_t*>(&rsi90) = al89;
        *reinterpret_cast<int32_t*>(&rsi90 + 4) = 0;
        rax91 = fun_402230(0x60b560, rsi90, rdx16);
        fun_402070(rax91, rsi90, rdx16);
        rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp84) - 8 + 8 - 8 + 8);
        if (v75 != r15_5) {
            fun_401ec0(v75, v75);
            rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp65) - 8 + 8);
        }
    } else {
        r15_92 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp65) + 80);
        r14_93 = v94;
        while (r14_93 != r15_92) {
            rcx95 = *reinterpret_cast<void***>(r12_7 + 40);
            rax96 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r14_93 + 32)))) << 5);
            rsi97 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx95) + reinterpret_cast<uint64_t>(rax96));
            rdx16 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx95) + reinterpret_cast<uint64_t>(rax96) + 8);
            rax98 = fun_402020(0x60b560, rsi97, rdx16);
            rsp99 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp65) - 8 + 8);
            rbp100 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax98) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(*reinterpret_cast<void***>(rax98) + 0xffffffffffffffe8)) + 0xf0);
            if (!rbp100) {
                fun_401e80(0x60b560, rsi97, rdx16);
                rsp99 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp99) - 8 + 8);
            }
            if (!*reinterpret_cast<void***>(rbp100 + 56)) {
                fun_401ee0(rbp100, rsi97, rdx16);
                rax101 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbp100) + 48);
                al102 = reinterpret_cast<signed char>(rax101(rbp100, 10, rdx16));
                rsp99 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp99) - 8 + 8 - 8 + 8);
            } else {
                al102 = *reinterpret_cast<signed char*>(rbp100 + 67);
            }
            *reinterpret_cast<int32_t*>(&rsi103) = al102;
            *reinterpret_cast<int32_t*>(&rsi103 + 4) = 0;
            rax104 = fun_402230(rax98, rsi103, rdx16);
            fun_402070(rax104, rsi103, rdx16);
            rax105 = fun_401fe0(r14_93, rsi103, rdx16, rcx95);
            rsp65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp99) - 8 + 8 - 8 + 8 - 8 + 8);
            r14_93 = rax105;
        }
    }
    rax30 = _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(reinterpret_cast<int64_t>(rsp65) + 72, v106, rdx16);
    goto addr_404cfb_26;
}

/* std::ctype<char>::_M_widen_init() const */
int64_t _ZNKSt5ctypeIcE13_M_widen_initEv = 0x401ee6;

void fun_401ee0(void** rdi, void** rsi, void** rdx) {
    goto _ZNKSt5ctypeIcE13_M_widen_initEv;
}

/* std::ostream::put(char) */
int64_t _ZNSo3putEc = 0x402236;

int64_t fun_402230(void** rdi, void** rsi, void** rdx) {
    goto _ZNSo3putEc;
}

/* std::ostream::flush() */
int64_t _ZNSo5flushEv = 0x402076;

void** fun_402070(int64_t rdi, void** rsi, void** rdx) {
    goto _ZNSo5flushEv;
}

/* std::__throw_bad_cast() */
int64_t _ZSt16__throw_bad_castv = 0x401e86;

void fun_401e80(void** rdi, void** rsi, void** rdx) {
    goto _ZSt16__throw_bad_castv;
}

/* WordMap::WordMap() */
void _ZN7WordMapC1Ev(void** rdi);

/* FileMapper::FileMapper(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN10FileMapperC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9);

/* Index::Index(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN5IndexC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(struct s3* rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    void** rax7;
    void** rsp8;
    void** rbp9;
    void** v10;
    void** r12_11;
    void** rbx12;
    void** rax13;
    void** rax14;

    _ZN7WordMapC1Ev(&rdi->f8);
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [r13+0x28], xmm0");
    rdi->f56 = 0;
    rax7 = fun_402200(40, rsi, rdx, rcx);
    rsp8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - 8 + 8);
    rbp9 = rsp8 + 16;
    v10 = rbp9;
    r12_11 = *reinterpret_cast<void***>(rsi);
    rbx12 = *reinterpret_cast<void***>(rsi + 8);
    if (!r12_11 && rbx12) {
        fun_4020d0("basic_string::_M_construct null not valid", rsi);
        rsp8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8 - 8) + 8);
    }
    if (reinterpret_cast<unsigned char>(rbx12) <= reinterpret_cast<unsigned char>(15)) {
        rax13 = rbp9;
    } else {
        *reinterpret_cast<int32_t*>(&rdx) = 0;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        rax13 = fun_401ef0(rsp8, rsp8 + 32);
        rsp8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8 - 8) + 8);
        v10 = rax13;
        rcx = rbx12;
    }
    if (rbx12) {
        if (!reinterpret_cast<int1_t>(rbx12 == 1)) {
            rdx = rbx12;
            fun_402240(rax13, r12_11, rdx, rcx, r8);
            rsp8 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp8 - 8) + 8);
        } else {
            *reinterpret_cast<void***>(rax13) = *reinterpret_cast<void***>(r12_11);
        }
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(rbx12)) = 0;
    rax14 = _ZN10FileMapperC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rax7, rsp8, rdx, v10, r8, r9);
    rdi->f0 = rax7;
    if (v10 != rbp9) {
        rax14 = fun_401ec0(v10, v10);
    }
    return rax14;
}

/* FileMapper::traverseFS(DirNode*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >*) */
void** _ZN10FileMapper10traverseFSEP7DirNodeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPSt6vectorIS7_SaIS7_EE(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9);

/* void std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::_M_emplace_back_aux<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&) */
void** _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJS5_EEEvDpOT_(void** rdi, void** rsi, void** rdx);

void** fun_401e40(int64_t rdi, ...);

/* FileMapper::getPaths() */
void** _ZN10FileMapper8getPathsEv(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    void** rax7;
    void** rax8;
    void** rsp9;
    void** rbp10;
    void** v11;
    void** r12_12;
    void** rbx13;
    void** rax14;
    void** rax15;
    void*** rsp16;
    void** rbx17;
    void** r14_18;
    void** v19;
    void** v20;
    int32_t eax21;
    void* rsp22;
    int32_t r12d23;
    void** r15_24;
    int32_t ebp25;
    void** r13_26;
    void** rdx27;
    struct s7* rax28;
    void** v29;
    void** v30;
    void** rax31;
    void** rcx32;
    void** v33;
    void** v34;
    void** v35;
    void** rax36;
    void* rsp37;
    int32_t v38;
    void** r15_39;
    void** rbx40;
    int32_t r14d41;
    void** rsi42;
    void** v43;
    void** rax44;
    void* rsp45;
    void** rbp46;
    struct s7* rax47;
    void* rsp48;
    void** v49;
    void** rcx50;
    void** v51;
    struct s6* rax52;
    void* rsp53;
    void** v54;
    void** rcx55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** rax60;

    rax7 = _ZNK6FSTree8get_rootEv(rdi);
    rax8 = fun_402200(24, rsi, rdx, rcx);
    rsp9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - 8 + 8);
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [r14], xmm0");
    *reinterpret_cast<void***>(rax8 + 16) = reinterpret_cast<void**>(0);
    rbp10 = rsp9 + 16;
    v11 = rbp10;
    r12_12 = *reinterpret_cast<void***>(rdi + 8);
    rbx13 = *reinterpret_cast<void***>(rdi + 16);
    if (r12_12 || !rbx13) {
        if (reinterpret_cast<unsigned char>(rbx13) <= reinterpret_cast<unsigned char>(15)) {
            rax14 = rbp10;
        } else {
            rax14 = fun_401ef0(rsp9, rsp9 + 32);
            rsp9 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp9 - 8) + 8);
            v11 = rax14;
            rcx = rbx13;
        }
        if (rbx13) {
            if (!reinterpret_cast<int1_t>(rbx13 == 1)) {
                fun_402240(rax14, r12_12, rbx13, rcx, r8);
                rsp9 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp9 - 8) + 8);
            } else {
                *reinterpret_cast<void***>(rax14) = *reinterpret_cast<void***>(r12_12);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v11) + reinterpret_cast<unsigned char>(rbx13)) = 0;
        _ZN10FileMapper10traverseFSEP7DirNodeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPSt6vectorIS7_SaIS7_EE(rdi, rax7, rsp9, rax8, r8, r9);
        if (v11 != rbp10) {
            fun_401ec0(v11, v11);
        }
        return rax8;
    } else {
        rax15 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
        rsp16 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp9 - 8) + 8);
        if (v11 != rbp10) {
            fun_401ec0(v11);
            rsp16 = rsp16 - 8 + 8;
        }
        fun_402210(rax15, rsi);
        rbx17 = rcx;
        r14_18 = rdx;
        v19 = rsi;
        v20 = rax15;
        eax21 = _ZNK7DirNode9num_filesEv(rsi, rsi, rdx);
        rsp22 = reinterpret_cast<void*>(rsp16 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xf8 - 8 + 8);
        r12d23 = eax21;
        if (!(reinterpret_cast<uint1_t>(r12d23 < 0) | reinterpret_cast<uint1_t>(r12d23 == 0))) {
            r15_24 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp22) + 0xe0);
            ebp25 = 0;
            r13_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp22) + 0xb0);
            do {
                *reinterpret_cast<int32_t*>(&rdx27) = ebp25;
                *reinterpret_cast<int32_t*>(&rdx27 + 4) = 0;
                _ZNK7DirNode8get_fileEi(r13_26, v19, rdx27);
                r8 = *reinterpret_cast<void***>(r14_18 + 8);
                *reinterpret_cast<int32_t*>(&rsi) = 0;
                *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                rax28 = fun_401f70(r13_26, r13_26);
                rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8 - 8 + 8);
                v29 = r15_24;
                rcx = reinterpret_cast<void**>(&rax28->f16);
                if (rax28->f0 == rcx) {
                    __asm__("movups xmm0, [rdx]");
                    __asm__("movups [r15], xmm0");
                } else {
                    v29 = rax28->f0;
                    v30 = *reinterpret_cast<void***>(&rax28->f16);
                }
                rdx = rax28->f8;
                rax28->f0 = rcx;
                rax28->f8 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(&rax28->f16) = reinterpret_cast<void**>(0);
                rax31 = *reinterpret_cast<void***>(rbx17 + 8);
                if (rax31 == *reinterpret_cast<void***>(rbx17 + 16)) {
                    rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp22) + 0xd0);
                    _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJS5_EEEvDpOT_(rbx17, rsi, rdx);
                    rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
                    if (v29 != r15_24) {
                        fun_401ec0(v29, v29);
                        rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
                    }
                } else {
                    *reinterpret_cast<void***>(rax31) = rax31 + 16;
                    if (v29 == r15_24) {
                        __asm__("movups xmm0, [r15]");
                        __asm__("movups [rcx], xmm0");
                        rcx32 = *reinterpret_cast<void***>(rbx17 + 8);
                    } else {
                        *reinterpret_cast<void***>(rax31) = v29;
                        *reinterpret_cast<void***>(rax31 + 16) = v30;
                        rcx32 = rax31;
                    }
                    rdx = rdx;
                    *reinterpret_cast<void***>(rax31 + 8) = rdx;
                    *reinterpret_cast<signed char*>(&v30) = 0;
                    rcx = rcx32 + 32;
                    *reinterpret_cast<void***>(rbx17 + 8) = rcx;
                }
                if (v33 != reinterpret_cast<uint64_t>(rsp22) + 0xc0) {
                    fun_401ec0(v33, v33);
                    rsp22 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
                }
                ++ebp25;
            } while (ebp25 < r12d23);
        }
        v34 = rbx17;
        v35 = r14_18;
        rax36 = _ZNK7DirNode11num_subdirsEv(v19, rsi, rdx);
        rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp22) - 8 + 8);
        v38 = *reinterpret_cast<int32_t*>(&rax36);
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax36) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax36) == 0))) {
            r15_39 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp37) + 0x80);
            rbx40 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp37) + 0xa0);
            r14d41 = 0;
            do {
                *reinterpret_cast<int32_t*>(&rsi42) = r14d41;
                *reinterpret_cast<int32_t*>(&rsi42 + 4) = 0;
                rax44 = _ZNK7DirNode10get_subdirEi(v19, rsi42, rdx, rcx, r8, r9, v43);
                rsp45 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
                rbp46 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp45) + 80);
                _ZNK7DirNode8get_nameEv(rbp46, rax44, rdx, rcx, r8, r9);
                r8 = *reinterpret_cast<void***>(v35 + 8);
                rax47 = fun_401f70(rbp46, rbp46);
                rsp48 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp45) - 8 + 8 - 8 + 8);
                v49 = r15_39;
                rcx50 = reinterpret_cast<void**>(&rax47->f16);
                if (rax47->f0 == rcx50) {
                    __asm__("movups xmm0, [rdx]");
                    __asm__("movups [r15], xmm0");
                } else {
                    v49 = rax47->f0;
                }
                v51 = rax47->f8;
                rax47->f0 = rcx50;
                rax47->f8 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(&rax47->f16) = reinterpret_cast<void**>(0);
                if (v51 == 0x7fffffffffffffff) {
                    fun_401e40("basic_string::append");
                    rsp48 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp48) - 8 + 8);
                }
                rax52 = fun_402140(reinterpret_cast<uint64_t>(rsp48) + 0x70, "/", 1);
                rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp48) - 8 + 8);
                v54 = rbx40;
                rcx55 = reinterpret_cast<void**>(&rax52->f16);
                if (rax52->f0 == rcx55) {
                    __asm__("movups xmm0, [rdx]");
                    __asm__("movups [rbx], xmm0");
                } else {
                    v54 = rax52->f0;
                    v56 = *reinterpret_cast<void***>(&rax52->f16);
                }
                v57 = rax52->f8;
                rax52->f0 = rcx55;
                rax52->f8 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(&rax52->f16) = reinterpret_cast<void**>(0);
                if (v49 != r15_39) {
                    fun_401ec0(v49, v49);
                    rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
                }
                if (v58 != reinterpret_cast<uint64_t>(rsp53) + 96) {
                    fun_401ec0(v58, v58);
                    rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
                }
                v59 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp53) + 64);
                if (!v54 && v57) {
                    fun_4020d0("basic_string::_M_construct null not valid", "/");
                    rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
                }
                rax60 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp53) + 64);
                if (reinterpret_cast<unsigned char>(v57) >= reinterpret_cast<unsigned char>(16)) {
                    rax60 = fun_401ef0(reinterpret_cast<uint64_t>(rsp53) + 48, reinterpret_cast<uint64_t>(rsp53) + 0xf0);
                    rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
                    v59 = rax60;
                    rcx55 = v57;
                }
                if (v57) {
                    if (!reinterpret_cast<int1_t>(v57 == 1)) {
                        fun_402240(rax60, v54, v57, rcx55, r8);
                        rsp53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
                    } else {
                        *reinterpret_cast<void***>(rax60) = v56;
                    }
                }
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v59) + reinterpret_cast<unsigned char>(v57)) = 0;
                rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp53) + 48);
                rcx = v34;
                _ZN10FileMapper10traverseFSEP7DirNodeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPSt6vectorIS7_SaIS7_EE(v20, rax44, rdx, rcx, r8, r9);
                rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp53) - 8 + 8);
                r15_39 = r15_39;
                if (v59 != reinterpret_cast<uint64_t>(rsp37) + 64) {
                    fun_401ec0(v59, v59);
                    rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
                }
                if (v54 != rbx40) {
                    fun_401ec0(v54, v54);
                    rsp37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp37) - 8 + 8);
                }
                ++r14d41;
            } while (r14d41 < v38);
        }
        goto v11;
    }
}

/* build_tree(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _Z10build_treeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx, void** rcx, void** r8);

void** fun_401ed0(int64_t rdi, void** rsi, void** rdx);

struct s14 {
    signed char[19] pad19;
    void** f19;
};

struct s14* fun_401fd0(int64_t rdi, void** rsi, void** rdx);

/* void std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::_M_emplace_back_aux<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
void** _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJRKS5_EEEvDpOT_(void** rdi, void** rsi, void** rdx);

void fun_4021c0(int64_t rdi, void** rsi, void** rdx);

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*) */
void** _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_PKS5_(void** rdi, void** rsi, void** rdx);

/* FSTree::FSTree(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN6FSTreeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx) {
    void* rsp4;
    void** r12_5;
    void** r13_6;
    void** v7;
    void** r15_8;
    void** rbx9;
    void** rax10;
    void** rcx11;
    void** r8_12;
    void** rcx13;
    void** r8_14;
    void** rax15;
    void** v16;
    void** r14_17;
    void** rbx18;
    void** rax19;
    void** r8_20;
    void** rax21;
    void** rax22;
    void* rsp23;
    void** rbx24;
    void** rdi25;
    int64_t rax26;
    int64_t r15_27;
    void** rax28;
    void** rax29;
    void* rsp30;
    void* rsp31;
    void** rsi32;
    void* rsp33;
    void** v34;
    void** v35;
    void** v36;
    void** r14_37;
    struct s14* rax38;
    void* rsp39;
    void** rbx40;
    void** v41;
    void** rax42;
    void** rax43;
    void** r8_44;
    void** v45;
    void** rax46;
    void** r8_47;
    void* rsp48;
    void** r15_49;
    void** v50;
    void** r13_51;
    int64_t v52;
    void** rax53;
    void** r12_54;
    void** r14_55;
    void** v56;
    void** v57;
    void** rbx58;
    void** rbp59;
    void** r8_60;
    void** rsi61;
    struct s6* rax62;
    void* rsp63;
    void** v64;
    void** rcx65;
    void** v66;
    void** rdx67;
    void** v68;
    signed char al69;
    void* rsp70;
    void** v71;
    void** rbp72;
    void** rax73;
    void** r8_74;
    void** r8_75;
    void** rax76;
    void* rsp77;
    void** v78;
    void** rax79;
    void** r8_80;
    void** rbx81;
    void** rdi82;
    void** rbx83;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 80);
    r12_5 = rsi;
    r13_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 56);
    v7 = r13_6;
    r15_8 = *reinterpret_cast<void***>(r12_5);
    rbx9 = *reinterpret_cast<void***>(r12_5 + 8);
    if (r15_8 || !rbx9) {
        if (reinterpret_cast<unsigned char>(rbx9) <= reinterpret_cast<unsigned char>(15)) {
            rax10 = r13_6;
        } else {
            rsi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 72);
            *reinterpret_cast<int32_t*>(&rdx) = 0;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rax10 = fun_401ef0(reinterpret_cast<int64_t>(rsp4) + 40, rsi);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            v7 = rax10;
            rcx11 = rbx9;
        }
        if (rbx9) {
            if (!reinterpret_cast<int1_t>(rbx9 == 1)) {
                rsi = r15_8;
                rdx = rbx9;
                fun_402240(rax10, rsi, rdx, rcx11, r8_12);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax10) = *reinterpret_cast<void***>(r15_8);
            }
        }
        rcx13 = v7;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx13) + reinterpret_cast<unsigned char>(rbx9)) = 0;
        rax15 = _Z10build_treeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<int64_t>(rsp4) + 40, rsi, rdx, rcx13, r8_14);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        r15_8 = rax15;
        *reinterpret_cast<void***>(rdi) = r15_8;
        if (v7 != r13_6) {
            fun_401ec0(v7, v7);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            r15_8 = *reinterpret_cast<void***>(rdi);
        }
        r13_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 24);
        v16 = r13_6;
        r14_17 = *reinterpret_cast<void***>(r12_5);
        rbx18 = *reinterpret_cast<void***>(r12_5 + 8);
        if (r14_17 || !rbx18) {
            if (reinterpret_cast<unsigned char>(rbx18) <= reinterpret_cast<unsigned char>(15)) {
                rax19 = r13_6;
            } else {
                *reinterpret_cast<int32_t*>(&rdx) = 0;
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                rax19 = fun_401ef0(reinterpret_cast<int64_t>(rsp4) + 8, reinterpret_cast<int64_t>(rsp4) + 72);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                v16 = rax19;
                rcx13 = rbx18;
            }
            if (rbx18) {
                if (!reinterpret_cast<int1_t>(rbx18 == 1)) {
                    rdx = rbx18;
                    fun_402240(rax19, r14_17, rdx, rcx13, r8_20);
                    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax19) = *reinterpret_cast<void***>(r14_17);
                }
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(rbx18)) = 0;
            rax21 = _ZN7DirNode8set_nameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(r15_8, reinterpret_cast<int64_t>(rsp4) + 8, rdx);
            if (v16 != r13_6) {
                rax21 = fun_401ec0(v16, v16);
            }
            return rax21;
        }
    }
    rax22 = fun_4020d0("basic_string::_M_construct null not valid", rsi, "basic_string::_M_construct null not valid", rsi);
    rsp23 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    rbx24 = rax22;
    if (v7 != r13_6) {
        fun_401ec0(v7, v7);
        rsp23 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp23) - 8 + 8);
    }
    fun_402210(rbx24, rsi, rbx24, rsi);
    rdi25 = *reinterpret_cast<void***>(rbx24);
    rax26 = fun_401fa0(rdi25, rsi, rdx);
    r15_27 = rax26;
    if (!r15_27) {
        while (1) {
            fun_402020(0x60b400, "Could not build index, exiting.\n", 32);
            rax28 = fun_401ed0(1, "Could not build index, exiting.\n", 32);
            fun_401ec0(rbx24, rbx24);
            fun_402210(rax28, "Could not build index, exiting.\n", rax28, "Could not build index, exiting.\n");
        }
    }
    rax29 = fun_402200(88, rsi, rdx, rcx13);
    rsp30 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp23) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x148 - 8 + 8 - 8 + 8);
    _Z9base_nameRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<int64_t>(rsp30) + 0x100, rbx24, rdx);
    rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp30) - 8 + 8);
    rsi32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp31) + 0x100);
    _ZN7DirNodeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rax29, rsi32, rdx, rcx13);
    rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
    v34 = rbx24;
    v35 = rax29;
    if (v36 != reinterpret_cast<int64_t>(rsp33) + 0x110) {
        fun_401ec0(v36, v36);
        rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
    }
    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [rsp+0xe0], xmm0");
    r14_37 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp33) + 0xd0);
    while (rax38 = fun_401fd0(r15_27, rsi32, rdx), rsp39 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8), !!rax38) {
        rbx40 = reinterpret_cast<void**>(&rax38->f19);
        v41 = r14_37;
        rax42 = fun_401f90(rbx40, rsi32, rdx);
        rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp39) - 8 + 8);
        rax43 = r14_37;
        if (reinterpret_cast<unsigned char>(rax42) >= reinterpret_cast<unsigned char>(16)) {
            *reinterpret_cast<int32_t*>(&rdx) = 0;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rsi32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp33) + 0x120);
            rax43 = fun_401ef0(reinterpret_cast<int64_t>(rsp33) + 0xc0, rsi32);
            rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
            v41 = rax43;
            rcx13 = rax42;
        }
        if (rax42) {
            if (!reinterpret_cast<int1_t>(rax42 == 1)) {
                rsi32 = rbx40;
                rdx = rax42;
                fun_402240(rax43, rsi32, rdx, rcx13, r8_44);
                rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax43) = *reinterpret_cast<void***>(rbx40);
            }
        }
        rcx13 = v41;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx13) + reinterpret_cast<unsigned char>(rax42)) = 0;
        if (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v41))) != 46) {
            if (!v45) {
                rsi32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp33) + 0xc0);
                _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJRKS5_EEEvDpOT_(reinterpret_cast<int64_t>(rsp33) + 0xe0, rsi32, rdx);
                rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
            } else {
                rax46 = v45 + 16;
                *reinterpret_cast<void***>(v45) = rax46;
                if (!v41 && rax42) {
                    rax46 = fun_4020d0("basic_string::_M_construct null not valid", rsi32, "basic_string::_M_construct null not valid", rsi32);
                    rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
                }
                if (reinterpret_cast<unsigned char>(rax42) > reinterpret_cast<unsigned char>(15)) {
                    *reinterpret_cast<int32_t*>(&rdx) = 0;
                    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                    rsi32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp33) + 0x128);
                    rax46 = fun_401ef0(v45, rsi32);
                    rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
                    *reinterpret_cast<void***>(v45) = rax46;
                    rcx13 = rax42;
                    *reinterpret_cast<void***>(v45 + 16) = rcx13;
                }
                if (rax42) {
                    if (!reinterpret_cast<int1_t>(rax42 == 1)) {
                        rsi32 = v41;
                        rdx = rax42;
                        fun_402240(rax46, rsi32, rdx, rcx13, r8_47);
                        rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
                    } else {
                        *reinterpret_cast<void***>(rax46) = *reinterpret_cast<void***>(v41);
                    }
                }
                *reinterpret_cast<void***>(v45 + 8) = rax42;
                rcx13 = *reinterpret_cast<void***>(v45);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx13) + reinterpret_cast<unsigned char>(rax42)) = 0;
                v45 = v45 + 32;
            }
        }
        if (v41 != r14_37) {
            fun_401ec0(v41, v41);
            rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 + 8);
        }
    }
    fun_4021c0(r15_27, rsi32, rdx);
    rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp39) - 8 + 8);
    r15_49 = v50;
    r13_51 = v45;
    if (r15_49 != r13_51) 
        goto addr_4076b2_56;
    addr_407aaa_57:
    if (r15_49) {
        fun_401ec0(r15_49, r15_49);
    }
    goto v52;
    addr_4076b2_56:
    rax53 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0xb0);
    r12_54 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0x90);
    r14_55 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 96);
    v56 = r15_49;
    do {
        v57 = rax53;
        rbx58 = *reinterpret_cast<void***>(r15_49);
        rbp59 = *reinterpret_cast<void***>(r15_49 + 8);
        if (!rbx58 && rbp59) {
            rax53 = fun_4020d0("basic_string::_M_construct null not valid", rsi32, "basic_string::_M_construct null not valid", rsi32);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
        }
        if (reinterpret_cast<unsigned char>(rbp59) >= reinterpret_cast<unsigned char>(16)) {
            rax53 = fun_401ef0(reinterpret_cast<int64_t>(rsp48) + 0xa0, reinterpret_cast<int64_t>(rsp48) + 0x130);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            v57 = rax53;
            rcx13 = rbp59;
        }
        if (rbp59) {
            if (!reinterpret_cast<int1_t>(rbp59 == 1)) {
                fun_402240(rax53, rbx58, rbp59, rcx13, r8_60);
                rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax53) = *reinterpret_cast<void***>(rbx58);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v57) + reinterpret_cast<unsigned char>(rbp59)) = 0;
        _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_PKS5_(r14_55, v34, "/");
        rsi61 = v57;
        rax62 = fun_402140(r14_55, rsi61, rbp59);
        rsp63 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8 - 8 + 8);
        v64 = r12_54;
        rcx65 = reinterpret_cast<void**>(&rax62->f16);
        if (rax62->f0 == rcx65) {
            __asm__("movups xmm0, [rdx]");
            __asm__("movups [r12], xmm0");
        } else {
            v64 = rax62->f0;
            v66 = *reinterpret_cast<void***>(&rax62->f16);
        }
        rdx67 = rax62->f8;
        rax62->f0 = rcx65;
        rax62->f8 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(&rax62->f16) = reinterpret_cast<void**>(0);
        if (v68 != reinterpret_cast<int64_t>(rsp63) + 0x70) {
            fun_401ec0(v68, v68);
            rsp63 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp63) - 8 + 8);
        }
        al69 = _Z7is_filePKc(v64, rsi61, rdx67, rcx65);
        rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp63) - 8 + 8);
        if (!al69) {
            v71 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp70) + 48);
            rbp72 = rdx67;
            if (!v64 && rbp72) {
                fun_4020d0("basic_string::_M_construct null not valid", rsi61);
                rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
            }
            rax73 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp70) + 48);
            if (reinterpret_cast<unsigned char>(rbp72) >= reinterpret_cast<unsigned char>(16)) {
                *reinterpret_cast<int32_t*>(&rdx67) = 0;
                *reinterpret_cast<int32_t*>(&rdx67 + 4) = 0;
                rsi61 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp70) + 0x140);
                rax73 = fun_401ef0(reinterpret_cast<int64_t>(rsp70) + 32, rsi61);
                rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
                v71 = rax73;
                rcx65 = rbp72;
            }
            if (rbp72) {
                if (!reinterpret_cast<int1_t>(rbp72 == 1)) {
                    rsi61 = v64;
                    rdx67 = rbp72;
                    fun_402240(rax73, rsi61, rdx67, rcx65, r8_74);
                    rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax73) = v66;
                }
            }
            rcx13 = v71;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx13) + reinterpret_cast<unsigned char>(rbp72)) = 0;
            rax76 = _Z10build_treeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<int64_t>(rsp70) + 32, rsi61, rdx67, rcx13, r8_75);
            rsp77 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
            if (v71 != reinterpret_cast<int64_t>(rsp77) + 48) {
                fun_401ec0(v71, v71);
                rsp77 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp77) - 8 + 8);
            }
            _ZN7DirNode10set_parentEPS_(rax76, v35, rdx67);
            rsi32 = rax76;
            _ZN7DirNode10add_subdirEPS_(v35, rsi32, rdx67);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp77) - 8 + 8 - 8 + 8);
        } else {
            v78 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp70) + 80);
            if (!v57 && rbp59) {
                fun_4020d0("basic_string::_M_construct null not valid", rsi61);
                rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
            }
            rax79 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp70) + 80);
            if (reinterpret_cast<unsigned char>(rbp59) >= reinterpret_cast<unsigned char>(16)) {
                *reinterpret_cast<int32_t*>(&rdx67) = 0;
                *reinterpret_cast<int32_t*>(&rdx67 + 4) = 0;
                rax79 = fun_401ef0(reinterpret_cast<int64_t>(rsp70) + 64, reinterpret_cast<int64_t>(rsp70) + 0x138);
                rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
                v78 = rax79;
                rcx65 = rbp59;
            }
            if (rbp59) {
                if (!reinterpret_cast<int1_t>(rbp59 == 1)) {
                    rdx67 = rbp59;
                    fun_402240(rax79, v57, rdx67, rcx65, r8_80);
                    rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax79) = *reinterpret_cast<void***>(v57);
                }
            }
            rcx13 = v78;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx13) + reinterpret_cast<unsigned char>(rbp59)) = 0;
            rsi32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp70) + 64);
            _ZN7DirNode8add_fileENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(v35, rsi32, rdx67);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
            if (v78 != reinterpret_cast<int64_t>(rsp48) + 80) {
                fun_401ec0(v78, v78);
                rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            }
        }
        if (v64 != r12_54) {
            fun_401ec0(v64, v64);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
        }
        rax53 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0xb0);
        if (v57 != rax53) {
            fun_401ec0(v57, v57);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            rax53 = rax53;
        }
        r15_49 = r15_49 + 32;
    } while (r15_49 != r13_51);
    r15_49 = v56;
    if (r15_49 == r13_51) 
        goto addr_407aaa_57;
    rbx81 = r15_49;
    do {
        rdi82 = *reinterpret_cast<void***>(rbx81);
        rbx83 = rbx81 + 16;
        if (rdi82 != rbx83) {
            fun_401ec0(rdi82, rdi82);
        }
        rbx81 = rbx83 + 16;
    } while (rbx81 != r13_51);
    goto addr_407aaa_57;
}

/* std::__throw_length_error(char const*) */
int64_t _ZSt20__throw_length_errorPKc = 0x401e46;

void** fun_401e40(int64_t rdi, ...) {
    goto _ZSt20__throw_length_errorPKc;
}

/* FileMapper::traverseFS(DirNode*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >*) */
void** _ZN10FileMapper10traverseFSEP7DirNodeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPSt6vectorIS7_SaIS7_EE(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    void** rbx7;
    void** r14_8;
    void** v9;
    void** v10;
    int32_t eax11;
    void* rsp12;
    int32_t r12d13;
    void** r15_14;
    int32_t ebp15;
    void** r13_16;
    void** rdx17;
    struct s7* rax18;
    void** v19;
    void** v20;
    void** rax21;
    void** rcx22;
    void** v23;
    void** v24;
    void** v25;
    void** rax26;
    void* rsp27;
    int32_t v28;
    void** r15_29;
    void** rbx30;
    int32_t r14d31;
    void** rsi32;
    void** v33;
    void** rax34;
    void* rsp35;
    void** rbp36;
    struct s7* rax37;
    void* rsp38;
    void** v39;
    void** rcx40;
    void** v41;
    struct s6* rax42;
    void* rsp43;
    void** v44;
    void** rcx45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** rax50;

    rbx7 = rcx;
    r14_8 = rdx;
    v9 = rsi;
    v10 = rdi;
    eax11 = _ZNK7DirNode9num_filesEv(rsi, rsi, rdx);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0xf8 - 8 + 8);
    r12d13 = eax11;
    if (!(reinterpret_cast<uint1_t>(r12d13 < 0) | reinterpret_cast<uint1_t>(r12d13 == 0))) {
        r15_14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xe0);
        ebp15 = 0;
        r13_16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xb0);
        do {
            *reinterpret_cast<int32_t*>(&rdx17) = ebp15;
            *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
            _ZNK7DirNode8get_fileEi(r13_16, v9, rdx17);
            r8 = *reinterpret_cast<void***>(r14_8 + 8);
            *reinterpret_cast<int32_t*>(&rsi) = 0;
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            rax18 = fun_401f70(r13_16, r13_16);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8 - 8 + 8);
            v19 = r15_14;
            rcx = reinterpret_cast<void**>(&rax18->f16);
            if (rax18->f0 == rcx) {
                __asm__("movups xmm0, [rdx]");
                __asm__("movups [r15], xmm0");
            } else {
                v19 = rax18->f0;
                v20 = *reinterpret_cast<void***>(&rax18->f16);
            }
            rdx = rax18->f8;
            rax18->f0 = rcx;
            rax18->f8 = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(&rax18->f16) = reinterpret_cast<void**>(0);
            rax21 = *reinterpret_cast<void***>(rbx7 + 8);
            if (rax21 == *reinterpret_cast<void***>(rbx7 + 16)) {
                rsi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xd0);
                _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJS5_EEEvDpOT_(rbx7, rsi, rdx);
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                if (v19 != r15_14) {
                    fun_401ec0(v19, v19);
                    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                }
            } else {
                *reinterpret_cast<void***>(rax21) = rax21 + 16;
                if (v19 == r15_14) {
                    __asm__("movups xmm0, [r15]");
                    __asm__("movups [rcx], xmm0");
                    rcx22 = *reinterpret_cast<void***>(rbx7 + 8);
                } else {
                    *reinterpret_cast<void***>(rax21) = v19;
                    *reinterpret_cast<void***>(rax21 + 16) = v20;
                    rcx22 = rax21;
                }
                rdx = rdx;
                *reinterpret_cast<void***>(rax21 + 8) = rdx;
                *reinterpret_cast<signed char*>(&v20) = 0;
                rcx = rcx22 + 32;
                *reinterpret_cast<void***>(rbx7 + 8) = rcx;
            }
            if (v23 != reinterpret_cast<int64_t>(rsp12) + 0xc0) {
                fun_401ec0(v23, v23);
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
            }
            ++ebp15;
        } while (ebp15 < r12d13);
    }
    v24 = rbx7;
    v25 = r14_8;
    rax26 = _ZNK7DirNode11num_subdirsEv(v9, rsi, rdx);
    rsp27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    v28 = *reinterpret_cast<int32_t*>(&rax26);
    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax26) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax26) == 0))) {
        r15_29 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp27) + 0x80);
        rbx30 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp27) + 0xa0);
        r14d31 = 0;
        do {
            *reinterpret_cast<int32_t*>(&rsi32) = r14d31;
            *reinterpret_cast<int32_t*>(&rsi32 + 4) = 0;
            rax34 = _ZNK7DirNode10get_subdirEi(v9, rsi32, rdx, rcx, r8, r9, v33);
            rsp35 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp27) - 8 + 8);
            rbp36 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp35) + 80);
            _ZNK7DirNode8get_nameEv(rbp36, rax34, rdx, rcx, r8, r9);
            r8 = *reinterpret_cast<void***>(v25 + 8);
            rax37 = fun_401f70(rbp36, rbp36);
            rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp35) - 8 + 8 - 8 + 8);
            v39 = r15_29;
            rcx40 = reinterpret_cast<void**>(&rax37->f16);
            if (rax37->f0 == rcx40) {
                __asm__("movups xmm0, [rdx]");
                __asm__("movups [r15], xmm0");
            } else {
                v39 = rax37->f0;
            }
            v41 = rax37->f8;
            rax37->f0 = rcx40;
            rax37->f8 = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(&rax37->f16) = reinterpret_cast<void**>(0);
            if (v41 == 0x7fffffffffffffff) {
                fun_401e40("basic_string::append");
                rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
            }
            rax42 = fun_402140(reinterpret_cast<int64_t>(rsp38) + 0x70, "/", 1);
            rsp43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
            v44 = rbx30;
            rcx45 = reinterpret_cast<void**>(&rax42->f16);
            if (rax42->f0 == rcx45) {
                __asm__("movups xmm0, [rdx]");
                __asm__("movups [rbx], xmm0");
            } else {
                v44 = rax42->f0;
                v46 = *reinterpret_cast<void***>(&rax42->f16);
            }
            v47 = rax42->f8;
            rax42->f0 = rcx45;
            rax42->f8 = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(&rax42->f16) = reinterpret_cast<void**>(0);
            if (v39 != r15_29) {
                fun_401ec0(v39, v39);
                rsp43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
            }
            if (v48 != reinterpret_cast<int64_t>(rsp43) + 96) {
                fun_401ec0(v48, v48);
                rsp43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
            }
            v49 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp43) + 64);
            if (!v44 && v47) {
                fun_4020d0("basic_string::_M_construct null not valid", "/");
                rsp43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
            }
            rax50 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp43) + 64);
            if (reinterpret_cast<unsigned char>(v47) >= reinterpret_cast<unsigned char>(16)) {
                rax50 = fun_401ef0(reinterpret_cast<int64_t>(rsp43) + 48, reinterpret_cast<int64_t>(rsp43) + 0xf0);
                rsp43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
                v49 = rax50;
                rcx45 = v47;
            }
            if (v47) {
                if (!reinterpret_cast<int1_t>(v47 == 1)) {
                    fun_402240(rax50, v44, v47, rcx45, r8);
                    rsp43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax50) = v46;
                }
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v49) + reinterpret_cast<unsigned char>(v47)) = 0;
            rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp43) + 48);
            rcx = v24;
            _ZN10FileMapper10traverseFSEP7DirNodeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPSt6vectorIS7_SaIS7_EE(v10, rax34, rdx, rcx, r8, r9);
            rsp27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
            rax26 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp27) + 64);
            r15_29 = r15_29;
            if (v49 != rax26) {
                rax26 = fun_401ec0(v49, v49);
                rsp27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp27) - 8 + 8);
            }
            if (v44 != rbx30) {
                rax26 = fun_401ec0(v44, v44);
                rsp27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp27) - 8 + 8);
            }
            ++r14d31;
        } while (r14d31 < v28);
    }
    return rax26;
}

/* std::__throw_bad_alloc() */
int64_t _ZSt17__throw_bad_allocv = 0x4021a6;

void** fun_4021a0() {
    goto _ZSt17__throw_bad_allocv;
}

/* FileMapper::FileMapper(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN10FileMapperC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    void* rsp7;
    void** r13_8;
    void** v9;
    void** r15_10;
    void** rbx11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rsp16;
    void** rbp17;
    void** v18;
    void** r12_19;
    void** rbx20;
    void** rax21;
    void** rax22;
    int64_t v23;
    void** rax24;
    void*** rsp25;
    void** rbx26;
    void** r14_27;
    void** v28;
    void** v29;
    int32_t eax30;
    void* rsp31;
    int32_t r12d32;
    void** r15_33;
    int32_t ebp34;
    void** r13_35;
    void** rdx36;
    struct s7* rax37;
    void** v38;
    void** v39;
    void** rax40;
    void** rcx41;
    void** v42;
    void** v43;
    void** v44;
    void** rax45;
    void* rsp46;
    int32_t v47;
    void** r15_48;
    void** rbx49;
    int32_t r14d50;
    void** rsi51;
    void** v52;
    void** rax53;
    void* rsp54;
    void** rbp55;
    struct s7* rax56;
    void* rsp57;
    void** v58;
    void** rcx59;
    void** v60;
    struct s6* rax61;
    void* rsp62;
    void** v63;
    void** rcx64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** rax69;

    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 48);
    r13_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 24);
    v9 = r13_8;
    r15_10 = *reinterpret_cast<void***>(rsi);
    rbx11 = *reinterpret_cast<void***>(rsi + 8);
    if (r15_10 || !rbx11) {
        if (reinterpret_cast<unsigned char>(rbx11) <= reinterpret_cast<unsigned char>(15)) {
            rax12 = r13_8;
        } else {
            *reinterpret_cast<int32_t*>(&rdx) = 0;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rax12 = fun_401ef0(reinterpret_cast<int64_t>(rsp7) + 8, reinterpret_cast<int64_t>(rsp7) + 40);
            rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
            v9 = rax12;
            rcx = rbx11;
        }
        if (rbx11) {
            if (!reinterpret_cast<int1_t>(rbx11 == 1)) {
                rdx = rbx11;
                fun_402240(rax12, r15_10, rdx, rcx, r8);
                rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax12) = *reinterpret_cast<void***>(r15_10);
            }
        }
        rcx = v9;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbx11)) = 0;
        _ZN6FSTreeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rdi, reinterpret_cast<int64_t>(rsp7) + 8, rdx);
        if (v9 != r13_8) {
            fun_401ec0(v9, v9);
        }
        rbx11 = rdi + 8;
        *reinterpret_cast<void***>(rdi + 8) = rdi + 24;
        *reinterpret_cast<void***>(rdi + 16) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(rdi + 24) = reinterpret_cast<void**>(0);
        if (*reinterpret_cast<void***>(rsi + 8) != 0x7fffffffffffffff) 
            goto addr_402a6d_12;
    } else {
        rax13 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
        if (v9 == r13_8) {
            fun_402210(rax13, rsi);
            rax14 = _ZNK6FSTree8get_rootEv(rax13);
            rax15 = fun_402200(24, rsi, rdx, rcx);
            rsp16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - 8 + 8);
            __asm__("xorps xmm0, xmm0");
            __asm__("movups [r14], xmm0");
            *reinterpret_cast<void***>(rax15 + 16) = reinterpret_cast<void**>(0);
            rbp17 = rsp16 + 16;
            v18 = rbp17;
            r12_19 = *reinterpret_cast<void***>(rax13 + 8);
            rbx20 = *reinterpret_cast<void***>(rax13 + 16);
            if (r12_19) 
                goto addr_402b44_16;
            if (rbx20) 
                goto addr_402bd7_18; else 
                goto addr_402b44_16;
        } else {
            fun_401ec0(v9);
            fun_402210(rax13, rsi);
        }
    }
    fun_401e40("basic_string::append", "basic_string::append");
    addr_402a6d_12:
    fun_402140(rsi, "/", 1);
    rax21 = fun_401fc0(rbx11, rsi, 1, rcx);
    return rax21;
    addr_402b44_16:
    if (reinterpret_cast<unsigned char>(rbx20) <= reinterpret_cast<unsigned char>(15)) {
        rax22 = rbp17;
    } else {
        rax22 = fun_401ef0(rsp16, rsp16 + 32);
        rsp16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp16 - 8) + 8);
        v18 = rax22;
        rcx = rbx20;
    }
    if (rbx20) {
        if (!reinterpret_cast<int1_t>(rbx20 == 1)) {
            fun_402240(rax22, r12_19, rbx20, rcx, r8);
            rsp16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp16 - 8) + 8);
        } else {
            *reinterpret_cast<void***>(rax22) = *reinterpret_cast<void***>(r12_19);
        }
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(rbx20)) = 0;
    _ZN10FileMapper10traverseFSEP7DirNodeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPSt6vectorIS7_SaIS7_EE(rax13, rax14, rsp16, rax15, r8, r9);
    if (v18 != rbp17) {
        fun_401ec0(v18, v18);
    }
    goto v23;
    addr_402bd7_18:
    rax24 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
    rsp25 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rsp16 - 8) + 8);
    if (v18 != rbp17) {
        fun_401ec0(v18);
        rsp25 = rsp25 - 8 + 8;
    }
    fun_402210(rax24, rsi);
    rbx26 = rcx;
    r14_27 = rdx;
    v28 = rsi;
    v29 = rax24;
    eax30 = _ZNK7DirNode9num_filesEv(rsi, rsi, rdx);
    rsp31 = reinterpret_cast<void*>(rsp25 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xf8 - 8 + 8);
    r12d32 = eax30;
    if (!(reinterpret_cast<uint1_t>(r12d32 < 0) | reinterpret_cast<uint1_t>(r12d32 == 0))) {
        r15_33 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp31) + 0xe0);
        ebp34 = 0;
        r13_35 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp31) + 0xb0);
        do {
            *reinterpret_cast<int32_t*>(&rdx36) = ebp34;
            *reinterpret_cast<int32_t*>(&rdx36 + 4) = 0;
            _ZNK7DirNode8get_fileEi(r13_35, v28, rdx36);
            r8 = *reinterpret_cast<void***>(r14_27 + 8);
            *reinterpret_cast<int32_t*>(&rsi) = 0;
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            rax37 = fun_401f70(r13_35, r13_35);
            rsp31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp31) - 8 + 8 - 8 + 8);
            v38 = r15_33;
            rcx = reinterpret_cast<void**>(&rax37->f16);
            if (rax37->f0 == rcx) {
                __asm__("movups xmm0, [rdx]");
                __asm__("movups [r15], xmm0");
            } else {
                v38 = rax37->f0;
                v39 = *reinterpret_cast<void***>(&rax37->f16);
            }
            rdx = rax37->f8;
            rax37->f0 = rcx;
            rax37->f8 = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(&rax37->f16) = reinterpret_cast<void**>(0);
            rax40 = *reinterpret_cast<void***>(rbx26 + 8);
            if (rax40 == *reinterpret_cast<void***>(rbx26 + 16)) {
                rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp31) + 0xd0);
                _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJS5_EEEvDpOT_(rbx26, rsi, rdx);
                rsp31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp31) - 8 + 8);
                if (v38 != r15_33) {
                    fun_401ec0(v38, v38);
                    rsp31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp31) - 8 + 8);
                }
            } else {
                *reinterpret_cast<void***>(rax40) = rax40 + 16;
                if (v38 == r15_33) {
                    __asm__("movups xmm0, [r15]");
                    __asm__("movups [rcx], xmm0");
                    rcx41 = *reinterpret_cast<void***>(rbx26 + 8);
                } else {
                    *reinterpret_cast<void***>(rax40) = v38;
                    *reinterpret_cast<void***>(rax40 + 16) = v39;
                    rcx41 = rax40;
                }
                rdx = rdx;
                *reinterpret_cast<void***>(rax40 + 8) = rdx;
                *reinterpret_cast<signed char*>(&v39) = 0;
                rcx = rcx41 + 32;
                *reinterpret_cast<void***>(rbx26 + 8) = rcx;
            }
            if (v42 != reinterpret_cast<uint64_t>(rsp31) + 0xc0) {
                fun_401ec0(v42, v42);
                rsp31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp31) - 8 + 8);
            }
            ++ebp34;
        } while (ebp34 < r12d32);
    }
    v43 = rbx26;
    v44 = r14_27;
    rax45 = _ZNK7DirNode11num_subdirsEv(v28, rsi, rdx);
    rsp46 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp31) - 8 + 8);
    v47 = *reinterpret_cast<int32_t*>(&rax45);
    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax45) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax45) == 0))) {
        r15_48 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp46) + 0x80);
        rbx49 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp46) + 0xa0);
        r14d50 = 0;
        do {
            *reinterpret_cast<int32_t*>(&rsi51) = r14d50;
            *reinterpret_cast<int32_t*>(&rsi51 + 4) = 0;
            rax53 = _ZNK7DirNode10get_subdirEi(v28, rsi51, rdx, rcx, r8, r9, v52);
            rsp54 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp46) - 8 + 8);
            rbp55 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp54) + 80);
            _ZNK7DirNode8get_nameEv(rbp55, rax53, rdx, rcx, r8, r9);
            r8 = *reinterpret_cast<void***>(v44 + 8);
            rax56 = fun_401f70(rbp55, rbp55);
            rsp57 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp54) - 8 + 8 - 8 + 8);
            v58 = r15_48;
            rcx59 = reinterpret_cast<void**>(&rax56->f16);
            if (rax56->f0 == rcx59) {
                __asm__("movups xmm0, [rdx]");
                __asm__("movups [r15], xmm0");
            } else {
                v58 = rax56->f0;
            }
            v60 = rax56->f8;
            rax56->f0 = rcx59;
            rax56->f8 = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(&rax56->f16) = reinterpret_cast<void**>(0);
            if (v60 == 0x7fffffffffffffff) {
                fun_401e40("basic_string::append");
                rsp57 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp57) - 8 + 8);
            }
            rax61 = fun_402140(reinterpret_cast<uint64_t>(rsp57) + 0x70, "/", 1);
            rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp57) - 8 + 8);
            v63 = rbx49;
            rcx64 = reinterpret_cast<void**>(&rax61->f16);
            if (rax61->f0 == rcx64) {
                __asm__("movups xmm0, [rdx]");
                __asm__("movups [rbx], xmm0");
            } else {
                v63 = rax61->f0;
                v65 = *reinterpret_cast<void***>(&rax61->f16);
            }
            v66 = rax61->f8;
            rax61->f0 = rcx64;
            rax61->f8 = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(&rax61->f16) = reinterpret_cast<void**>(0);
            if (v58 != r15_48) {
                fun_401ec0(v58, v58);
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
            }
            if (v67 != reinterpret_cast<uint64_t>(rsp62) + 96) {
                fun_401ec0(v67, v67);
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
            }
            v68 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp62) + 64);
            if (!v63 && v66) {
                fun_4020d0("basic_string::_M_construct null not valid", "/");
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
            }
            rax69 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp62) + 64);
            if (reinterpret_cast<unsigned char>(v66) >= reinterpret_cast<unsigned char>(16)) {
                rax69 = fun_401ef0(reinterpret_cast<uint64_t>(rsp62) + 48, reinterpret_cast<uint64_t>(rsp62) + 0xf0);
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
                v68 = rax69;
                rcx64 = v66;
            }
            if (v66) {
                if (!reinterpret_cast<int1_t>(v66 == 1)) {
                    fun_402240(rax69, v63, v66, rcx64, r8);
                    rsp62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax69) = v65;
                }
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v68) + reinterpret_cast<unsigned char>(v66)) = 0;
            rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp62) + 48);
            rcx = v43;
            _ZN10FileMapper10traverseFSEP7DirNodeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPSt6vectorIS7_SaIS7_EE(v29, rax53, rdx, rcx, r8, r9);
            rsp46 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp62) - 8 + 8);
            r15_48 = r15_48;
            if (v68 != reinterpret_cast<uint64_t>(rsp46) + 64) {
                fun_401ec0(v68, v68);
                rsp46 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp46) - 8 + 8);
            }
            if (v63 != rbx49) {
                fun_401ec0(v63, v63);
                rsp46 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp46) - 8 + 8);
            }
            ++r14d50;
        } while (r14d50 < v47);
    }
    goto v18;
}

/* std::basic_istream<char, std::char_traits<char> >& std::getline<char, std::char_traits<char>, std::allocator<char> >(std::basic_istream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char) */
int64_t _ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EES4_ = 0x402166;

int64_t* fun_402160(void* rdi, void* rsi, void** rdx) {
    goto _ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EES4_;
}

struct s15 {
    signed char f0;
    signed char[15] pad16;
    void** f16;
};

/* void std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::_M_emplace_back_aux<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&) */
void** _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJS5_EEEvDpOT_(void** rdi, void** rsi, void** rdx) {
    void** r14_4;
    void** rcx5;
    void** rax6;
    void** rsi7;
    void** rdi8;
    void** r12_9;
    void** rdx10;
    void** tmp64_11;
    void** r15_12;
    void* rax13;
    uint64_t rcx14;
    void** rdx15;
    void** rax16;
    void** rsp17;
    void** rbp18;
    void** v19;
    void** r12_20;
    void** rbx21;
    void** rax22;
    void** rax23;
    void** rbx24;
    void** rcx25;
    void** r13_26;
    uint64_t rax27;
    void* rdx28;
    struct s15* rsi29;
    void** rbp30;
    void** rdi31;
    void** rbp32;
    void** rax33;
    void** r8_34;
    void** r8_35;
    int64_t r9_36;
    int64_t rax37;

    r14_4 = rdi;
    rcx5 = *reinterpret_cast<void***>(r14_4);
    rax6 = *reinterpret_cast<void***>(r14_4 + 8);
    rsi7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rax6) - reinterpret_cast<unsigned char>(rcx5)) >> 5);
    *reinterpret_cast<int32_t*>(&rdi8) = 1;
    *reinterpret_cast<int32_t*>(&rdi8 + 4) = 0;
    if (rsi7) {
        rdi8 = rsi7;
    }
    r12_9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi8) + reinterpret_cast<unsigned char>(rsi7));
    rdx10 = reinterpret_cast<void**>(0x7ffffffffffffff);
    if (reinterpret_cast<unsigned char>(r12_9) >> 59) {
        r12_9 = reinterpret_cast<void**>(0x7ffffffffffffff);
    }
    tmp64_11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi8) + reinterpret_cast<unsigned char>(rsi7));
    if (reinterpret_cast<unsigned char>(tmp64_11) < reinterpret_cast<unsigned char>(rdi8)) {
        r12_9 = reinterpret_cast<void**>(0x7ffffffffffffff);
    }
    *reinterpret_cast<int32_t*>(&r15_12) = 0;
    *reinterpret_cast<int32_t*>(&r15_12 + 4) = 0;
    if (!r12_9) {
        addr_403122_8:
        rax13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax6) - reinterpret_cast<unsigned char>(rcx5));
        rcx14 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax13) >> 5);
        *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(r15_12) + reinterpret_cast<uint64_t>(rax13)) = reinterpret_cast<unsigned char>(r15_12) + reinterpret_cast<uint64_t>(rax13) + 16;
        rdx15 = rsi + 16;
        if (*reinterpret_cast<void***>(rsi) == rdx15) {
            __asm__("movups xmm0, [rsi]");
            __asm__("movups [rdi], xmm0");
        } else {
            *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax13) + reinterpret_cast<unsigned char>(r15_12)) = *reinterpret_cast<void***>(rsi);
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_12) + (rcx14 << 5) + 16) = *reinterpret_cast<void***>(rsi + 16);
        }
    } else {
        if (reinterpret_cast<unsigned char>(r12_9) > reinterpret_cast<unsigned char>(0x7ffffffffffffff)) {
            fun_4021a0();
            _ZN7WordMapC1Ev(tmp64_11 + 8);
            __asm__("xorps xmm0, xmm0");
            __asm__("movups [r13+0x28], xmm0");
            *reinterpret_cast<void***>(tmp64_11 + 56) = reinterpret_cast<void**>(0);
            rax16 = fun_402200(40, rsi7, 0x7ffffffffffffff, rcx5);
            rsp17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - 8 + 8);
            rbp18 = rsp17 + 16;
            v19 = rbp18;
            r12_20 = *reinterpret_cast<void***>(rsi7);
            rbx21 = *reinterpret_cast<void***>(rsi7 + 8);
            if (r12_20) 
                goto addr_4032db_14;
            if (rbx21) 
                goto addr_40336e_16; else 
                goto addr_4032db_14;
        } else {
            rax22 = fun_402200(reinterpret_cast<unsigned char>(r12_9) << 5, rsi7, 0x7ffffffffffffff, rcx5);
            r15_12 = rax22;
            rcx5 = *reinterpret_cast<void***>(r14_4);
            rax6 = *reinterpret_cast<void***>(r14_4 + 8);
            goto addr_403122_8;
        }
    }
    rax23 = *reinterpret_cast<void***>(rsi + 8);
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_12) + (rcx14 << 5) + 8) = rax23;
    *reinterpret_cast<void***>(rsi) = rdx15;
    *reinterpret_cast<void***>(rsi + 8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(rsi + 16) = reinterpret_cast<void**>(0);
    rbx24 = *reinterpret_cast<void***>(r14_4);
    rcx25 = *reinterpret_cast<void***>(r14_4 + 8);
    if (rbx24 == rcx25) {
        r13_26 = r15_12 + 32;
    } else {
        rax27 = reinterpret_cast<uint64_t>(rcx25 + 0xffffffffffffffe0);
        *reinterpret_cast<int32_t*>(&rdx28) = 16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = 0;
        do {
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_12) + reinterpret_cast<uint64_t>(rdx28) + 0xfffffffffffffff0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r15_12) + reinterpret_cast<uint64_t>(rdx28));
            rsi29 = reinterpret_cast<struct s15*>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rdx28));
            if (*reinterpret_cast<struct s15**>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rdx28) + 0xfffffffffffffff0) == rsi29) {
                __asm__("movups xmm0, [rdi]");
                __asm__("movups [r15+rdx], xmm0");
            } else {
                *reinterpret_cast<struct s15**>(reinterpret_cast<unsigned char>(r15_12) + reinterpret_cast<uint64_t>(rdx28) + 0xfffffffffffffff0) = *reinterpret_cast<struct s15**>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rdx28) + 0xfffffffffffffff0);
                *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r15_12) + reinterpret_cast<uint64_t>(rdx28)) = *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rdx28));
            }
            *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r15_12) + reinterpret_cast<uint64_t>(rdx28) + 0xfffffffffffffff8) = *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi29) + 0xfffffffffffffff8);
            *reinterpret_cast<struct s15**>(reinterpret_cast<uint64_t>(rsi29) + 0xfffffffffffffff0) = rsi29;
            *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi29) + 0xfffffffffffffff8) = 0;
            rsi29->f0 = 0;
            rdx28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx28) + 32);
        } while (!reinterpret_cast<int1_t>(&rsi29->f16 == rcx25));
        rax23 = reinterpret_cast<void**>(rax27 - reinterpret_cast<unsigned char>(rbx24) & 0xffffffffffffffe0);
        rbp30 = *reinterpret_cast<void***>(r14_4);
        rbx24 = *reinterpret_cast<void***>(r14_4 + 8);
        r13_26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax23) + reinterpret_cast<unsigned char>(r15_12) + 64);
        if (rbp30 != rbx24) 
            goto addr_403215_26;
    }
    addr_403244_27:
    if (rbx24) {
        rax23 = fun_401ec0(rbx24);
    }
    *reinterpret_cast<void***>(r14_4) = r15_12;
    *reinterpret_cast<void***>(r14_4 + 8) = r13_26;
    *reinterpret_cast<void***>(r14_4 + 16) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r12_9) << 5) + reinterpret_cast<unsigned char>(r15_12));
    return rax23;
    addr_403215_26:
    do {
        rdi31 = *reinterpret_cast<void***>(rbp30);
        rbp32 = rbp30 + 16;
        if (rdi31 != rbp32) {
            rax23 = fun_401ec0(rdi31);
        }
        rbp30 = rbp32 + 16;
    } while (rbp30 != rbx24);
    rbx24 = *reinterpret_cast<void***>(r14_4);
    goto addr_403244_27;
    addr_4032db_14:
    if (reinterpret_cast<unsigned char>(rbx21) <= reinterpret_cast<unsigned char>(15)) {
        rax33 = rbp18;
    } else {
        *reinterpret_cast<int32_t*>(&rdx10) = 0;
        *reinterpret_cast<int32_t*>(&rdx10 + 4) = 0;
        rax33 = fun_401ef0(rsp17, rsp17 + 32);
        rsp17 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp17 - 8) + 8);
        v19 = rax33;
        rcx5 = rbx21;
    }
    if (rbx21) {
        if (!reinterpret_cast<int1_t>(rbx21 == 1)) {
            rdx10 = rbx21;
            fun_402240(rax33, r12_20, rdx10, rcx5, r8_34);
            rsp17 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp17 - 8) + 8);
        } else {
            *reinterpret_cast<void***>(rax33) = *reinterpret_cast<void***>(r12_20);
        }
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v19) + reinterpret_cast<unsigned char>(rbx21)) = 0;
    _ZN10FileMapperC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rax16, rsp17, rdx10, v19, r8_35, r9_36);
    *reinterpret_cast<void***>(tmp64_11) = rax16;
    if (v19 != rbp18) {
        fun_401ec0(v19, v19);
    }
    goto rax37;
    addr_40336e_16:
    fun_4020d0("basic_string::_M_construct null not valid", rsi7);
    rsp17 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp17 - 8) + 8);
    goto addr_4032db_14;
}

/* std::__cxx11::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >::basic_istringstream(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::_Ios_Openmode) */
int64_t _ZNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEC1ERKNS_12basic_stringIcS2_S3_EESt13_Ios_Openmode = 0x4021b6;

void fun_4021b0(void* rdi, void* rsi, int64_t rdx) {
    goto _ZNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEC1ERKNS_12basic_stringIcS2_S3_EESt13_Ios_Openmode;
}

/* WordMap::get(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN7WordMap3getENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx, void** rcx, void** r8);

/* IndexList::IndexList(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN9IndexListC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx, void** rcx);

/* IndexList::insert(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int) */
void** _ZN9IndexList6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi(void** rdi, void** rsi, void** edx);

/* Index::processLine(std::__cxx11::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >&, int) */
void** _ZN5Index11processLineERNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEEi(struct s0* rdi, void** rsi, void** edx) {
    void** rdx3;
    void* rsp4;
    void** v5;
    void** r15_6;
    void** v7;
    void** r12_8;
    void** r13_9;
    void** v10;
    void** r14_11;
    void** rsi12;
    void* rsp13;
    void** v14;
    void** rax15;
    void** rdi16;
    void** rcx17;
    void** r8_18;
    int64_t r8_19;
    void** rbx20;
    void* rsp21;
    void** v22;
    void** rsi23;
    int32_t eax24;
    void** v25;
    void** rax26;
    void** r8_27;
    void** rcx28;
    void** r14_29;
    void** rbx30;
    void** al31;
    void** rax32;
    void** v33;
    void** v34;
    void** rax35;
    void** rdi36;
    void** rsi37;
    void** r8_38;
    int64_t r8_39;
    void** rcx40;
    void** rsi41;
    void** r8_42;
    void** rax43;
    void* rsp44;
    void** r14_45;
    void** rax46;
    void* rsp47;
    void** v48;
    void** rax49;
    void** rdi50;
    void** rsi51;
    void** r8_52;
    int64_t r8_53;
    void** rcx54;
    void** rsi55;
    void* rsp56;
    void** v57;
    void** rax58;
    void** rdi59;
    void** rsi60;
    void** r8_61;
    int64_t r8_62;
    void** v63;
    void** rax64;
    void** rdi65;
    void** rsi66;
    void** r8_67;
    int64_t r8_68;
    void** rax69;

    rdx3 = edx;
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x178);
    v5 = rdx3;
    r15_6 = rsi;
    v7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x138);
    r12_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0xf8);
    r13_9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0xb8);
    v10 = reinterpret_cast<void**>(&rdi->f8);
    r14_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x128);
    do {
        rsi12 = r14_11;
        fun_4021d0(r15_6, rsi12, rdx3);
        rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        v14 = r12_8;
        if (!v7 && 0) {
            fun_4020d0("basic_string::_M_construct null not valid", rsi12, "basic_string::_M_construct null not valid", rsi12);
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
        }
        rax15 = r12_8;
        if (!1) {
            rdi16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp13) + 0xe8);
            rsi12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp13) + 0x148);
            rax15 = fun_401ef0(rdi16, rsi12, rdi16, rsi12);
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
            v14 = rax15;
            rcx17 = reinterpret_cast<void**>(0);
        }
        if (!1) {
            if (1) {
                rsi12 = v7;
                fun_402240(rax15, rsi12, 0, rcx17, r8_18, rax15, rsi12, 0, rcx17, r8_19);
                rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax15) = reinterpret_cast<void**>(0);
            }
        }
        rcx17 = v14;
        *reinterpret_cast<void***>(rcx17) = reinterpret_cast<void**>(0);
        rbx20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp13) + 0x108);
        rdx3 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp13) + 0xe8);
        _ZN5Index16stripNonAlphaNumENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rbx20, rsi12, rdx3);
        fun_402000(r14_11, rbx20, rdx3);
        rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8 + 8);
        if (v22 != reinterpret_cast<int64_t>(rsp21) + 0x118) {
            fun_401ec0(v22, v22);
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
        }
        if (v14 != r12_8) {
            fun_401ec0(v14, v14);
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
        }
        *reinterpret_cast<int32_t*>(&rsi23) = 0x40832e;
        *reinterpret_cast<int32_t*>(&rsi23 + 4) = 0;
        eax24 = fun_4020f0(r14_11, 0x40832e, rdx3);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
        if (eax24) {
            v25 = r13_9;
            if (!v7 && 0) {
                fun_4020d0("basic_string::_M_construct null not valid", 0x40832e, "basic_string::_M_construct null not valid", 0x40832e);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            }
            rax26 = r13_9;
            if (!1) {
                rdx3 = reinterpret_cast<void**>(0);
                *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
                rsi23 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x150);
                rax26 = fun_401ef0(reinterpret_cast<int64_t>(rsp4) + 0xa8, rsi23);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                v25 = rax26;
                rcx17 = reinterpret_cast<void**>(0);
            }
            if (!1) {
                if (1) {
                    rsi23 = v7;
                    rdx3 = reinterpret_cast<void**>(0);
                    fun_402240(rax26, rsi23, 0, rcx17, r8_27);
                    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax26) = reinterpret_cast<void**>(0);
                }
            }
            rcx28 = v25;
            *reinterpret_cast<void***>(rcx28) = reinterpret_cast<void**>(0);
            r14_29 = v25;
            rbx30 = r14_29;
            if (!1) {
                do {
                    al31 = fun_402090(0, rsi23, rdx3);
                    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                    *reinterpret_cast<void***>(rbx30) = al31;
                    ++rbx30;
                    r14_29 = v25;
                } while (reinterpret_cast<unsigned char>(rbx30) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(r14_29))));
            }
            rax32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0xd8);
            v33 = rax32;
            if (r14_29 == r13_9) {
                __asm__("movups xmm0, [r13+0x0]");
                __asm__("movups [rax], xmm0");
                r14_29 = rax32;
            } else {
                v33 = r14_29;
            }
            v34 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x98);
            if (!r14_29 && 0) {
                fun_4020d0("basic_string::_M_construct null not valid", rsi23, "basic_string::_M_construct null not valid", rsi23);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            }
            rax35 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x98);
            if (!1) {
                rdx3 = reinterpret_cast<void**>(0);
                *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
                rdi36 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x88);
                rsi37 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x158);
                rax35 = fun_401ef0(rdi36, rsi37, rdi36, rsi37);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                v34 = rax35;
                rcx28 = reinterpret_cast<void**>(0);
            }
            if (!1) {
                if (1) {
                    rdx3 = reinterpret_cast<void**>(0);
                    fun_402240(rax35, r14_29, 0, rcx28, r8_38, rax35, r14_29, 0, rcx28, r8_39);
                    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax35) = *reinterpret_cast<void***>(r14_29);
                }
            }
            rcx40 = v34;
            *reinterpret_cast<void***>(rcx40) = reinterpret_cast<void**>(0);
            rsi41 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x88);
            rax43 = _ZN7WordMap3getENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(v10, rsi41, rdx3, rcx40, r8_42);
            rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            r14_45 = rax43;
            if (v34 != reinterpret_cast<int64_t>(rsp44) + 0x98) {
                fun_401ec0(v34, v34);
                rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 + 8);
            }
            if (!r14_45) {
                rax46 = fun_402200(40, rsi41, rdx3, rcx40);
                rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 + 8);
                r14_45 = rax46;
                v48 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp47) + 0x78);
                if (!v33 && 0) {
                    fun_4020d0("basic_string::_M_construct null not valid", rsi41, "basic_string::_M_construct null not valid", rsi41);
                    rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp47) - 8 + 8);
                }
                rax49 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp47) + 0x78);
                if (!1) {
                    rdx3 = reinterpret_cast<void**>(0);
                    *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
                    rdi50 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp47) + 0x68);
                    rsi51 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp47) + 0x160);
                    rax49 = fun_401ef0(rdi50, rsi51, rdi50, rsi51);
                    rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp47) - 8 + 8);
                    v48 = rax49;
                    rcx40 = reinterpret_cast<void**>(0);
                }
                if (!1) {
                    if (1) {
                        rdx3 = reinterpret_cast<void**>(0);
                        fun_402240(rax49, v33, 0, rcx40, r8_52, rax49, v33, 0, rcx40, r8_53);
                        rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp47) - 8 + 8);
                    } else {
                        *reinterpret_cast<void***>(rax49) = reinterpret_cast<void**>(0);
                    }
                }
                rcx54 = v48;
                *reinterpret_cast<void***>(rcx54) = reinterpret_cast<void**>(0);
                rsi55 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp47) + 0x68);
                _ZN9IndexListC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(r14_45, rsi55, rdx3, rcx54);
                rsp56 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp47) - 8 + 8);
                if (v48 != reinterpret_cast<int64_t>(rsp56) + 0x78) {
                    fun_401ec0(v48, v48);
                    rsp56 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp56) - 8 + 8);
                }
                v57 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp56) + 88);
                if (!v33 && 0) {
                    fun_4020d0("basic_string::_M_construct null not valid", rsi55, "basic_string::_M_construct null not valid", rsi55);
                    rsp56 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp56) - 8 + 8);
                }
                rax58 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp56) + 88);
                if (!1) {
                    rdi59 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp56) + 72);
                    rsi60 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp56) + 0x168);
                    rax58 = fun_401ef0(rdi59, rsi60, rdi59, rsi60);
                    rsp56 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp56) - 8 + 8);
                    v57 = rax58;
                    rcx54 = reinterpret_cast<void**>(0);
                }
                if (!1) {
                    if (1) {
                        fun_402240(rax58, v33, 0, rcx54, r8_61, rax58, v33, 0, rcx54, r8_62);
                        rsp56 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp56) - 8 + 8);
                    } else {
                        *reinterpret_cast<void***>(rax58) = reinterpret_cast<void**>(0);
                    }
                }
                rcx40 = v57;
                *reinterpret_cast<void***>(rcx40) = reinterpret_cast<void**>(0);
                rsi41 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp56) + 72);
                _ZN7WordMap6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP9IndexList(v10, rsi41, r14_45);
                rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp56) - 8 + 8);
                if (v57 != reinterpret_cast<int64_t>(rsp44) + 88) {
                    fun_401ec0(v57, v57);
                    rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 + 8);
                }
            }
            v63 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp44) + 56);
            if (!v7 && 0) {
                fun_4020d0("basic_string::_M_construct null not valid", rsi41, "basic_string::_M_construct null not valid", rsi41);
                rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 + 8);
            }
            rax64 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp44) + 56);
            if (!1) {
                rdi65 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp44) + 40);
                rsi66 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp44) + 0x170);
                rax64 = fun_401ef0(rdi65, rsi66, rdi65, rsi66);
                rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 + 8);
                v63 = rax64;
                rcx40 = reinterpret_cast<void**>(0);
            }
            if (!1) {
                if (1) {
                    fun_402240(rax64, v7, 0, rcx40, r8_67, rax64, v7, 0, rcx40, r8_68);
                    rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax64) = reinterpret_cast<void**>(0);
                }
            }
            rcx17 = v63;
            *reinterpret_cast<void***>(rcx17) = reinterpret_cast<void**>(0);
            rdx3 = v5;
            *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
            _ZN9IndexList6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi(r14_45, reinterpret_cast<int64_t>(rsp44) + 40, rdx3);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 + 8);
            r14_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x128);
            if (v63 != reinterpret_cast<int64_t>(rsp4) + 56) {
                fun_401ec0(v63, v63);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            }
            if (v33 != reinterpret_cast<int64_t>(rsp4) + 0xd8) {
                fun_401ec0(v33, v33);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            }
        }
    } while (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r15_6) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(*reinterpret_cast<void***>(r15_6) + 0xffffffffffffffe8)) + 32) & 2));
    rax69 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 0x138);
    if (v7 != rax69) {
        rax69 = fun_401ec0(v7, v7);
    }
    return rax69;
}

struct s16 {
    signed char[1] pad1;
    void** f1;
};

/* Index::stripNonAlphaNum(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN5Index16stripNonAlphaNumENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx) {
    void** r15_4;
    void** r14_5;
    void** rsi6;
    int32_t eax7;
    void* rsp8;
    void** r12_9;
    void** rbx10;
    int64_t rdi11;
    int32_t eax12;
    void** rbx13;
    struct s16* r13_14;
    int64_t rdi15;
    int32_t eax16;
    void** rcx17;
    void** rdx18;
    void** r13_19;
    void** rax20;
    void** r12_21;
    void** r15_22;
    void** rbx23;
    void** rax24;
    void** rcx25;
    int64_t rdi26;
    void** al27;
    void** rdx28;
    int64_t v29;
    void** r8_30;

    r15_4 = rdx;
    r14_5 = rdi;
    *reinterpret_cast<int32_t*>(&rsi6) = 0x40832e;
    *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
    eax7 = fun_4020f0(r15_4, 0x40832e, rdx);
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 16 - 8 + 8);
    if (!eax7) {
        *reinterpret_cast<void***>(r14_5) = r14_5 + 16;
        *reinterpret_cast<void***>(r14_5 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(r14_5 + 16) = reinterpret_cast<void**>(0);
    } else {
        *reinterpret_cast<int32_t*>(&r12_9) = 0;
        *reinterpret_cast<int32_t*>(&r12_9 + 4) = 0;
        if (!*reinterpret_cast<void***>(r15_4 + 8)) {
            *reinterpret_cast<int32_t*>(&rbx10) = 0;
            *reinterpret_cast<int32_t*>(&rbx10 + 4) = 0;
            goto addr_4041a0_5;
        } else {
            do {
                *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_4)) + reinterpret_cast<unsigned char>(r12_9));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
                eax12 = fun_402170(rdi11, 0x40832e);
                rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
                if (eax12) 
                    goto addr_40419c_8;
                ++r12_9;
                rbx10 = *reinterpret_cast<void***>(r15_4 + 8);
            } while (reinterpret_cast<unsigned char>(r12_9) < reinterpret_cast<unsigned char>(rbx10));
            goto addr_40417d_10;
        }
    }
    addr_404250_11:
    return r14_5;
    addr_4041a0_5:
    rbx13 = rbx10 - 1;
    do {
        r13_14 = reinterpret_cast<struct s16*>(reinterpret_cast<unsigned char>(rbx13) - reinterpret_cast<unsigned char>(r12_9));
        if (reinterpret_cast<unsigned char>(rbx13) < reinterpret_cast<unsigned char>(r12_9)) 
            break;
        *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_4)) + reinterpret_cast<unsigned char>(rbx13));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = 0;
        eax16 = fun_402170(rdi15, 0x40832e);
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
        --rbx13;
    } while (!eax16);
    rcx17 = *reinterpret_cast<void***>(r15_4 + 8);
    rdx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx17) - reinterpret_cast<unsigned char>(r12_9));
    if (reinterpret_cast<unsigned char>(rcx17) < reinterpret_cast<unsigned char>(r12_9)) {
        *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>("basic_string::substr");
        *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
        rdx18 = r12_9;
        fun_401e90("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", rdx18, rcx17);
    } else {
        r13_19 = reinterpret_cast<void**>(&r13_14->f1);
        rax20 = r14_5 + 16;
        *reinterpret_cast<void***>(r14_5) = rax20;
        r12_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_4)));
        if (reinterpret_cast<unsigned char>(rdx18) <= reinterpret_cast<unsigned char>(r13_19)) {
            r13_19 = rdx18;
        }
        if (!r13_19) 
            goto addr_4041f9_19;
        if (r12_21) 
            goto addr_4041f9_19;
    }
    fun_4020d0("basic_string::_M_construct null not valid", rsi6);
    r15_22 = rdx18;
    rbx23 = *reinterpret_cast<void***>(r15_22);
    rax24 = *reinterpret_cast<void***>(r15_22 + 8);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rax24) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rax24 == 0)) {
        rcx25 = rbx23;
    } else {
        do {
            *reinterpret_cast<int32_t*>(&rdi26) = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx23));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = 0;
            al27 = fun_402090(rdi26, rsi6, rdx18);
            *reinterpret_cast<void***>(rbx23) = al27;
            ++rbx23;
            rcx25 = *reinterpret_cast<void***>(r15_22);
            rax24 = *reinterpret_cast<void***>(r15_22 + 8);
            rdx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx25) + reinterpret_cast<unsigned char>(rax24));
        } while (reinterpret_cast<unsigned char>(rbx23) < reinterpret_cast<unsigned char>(rdx18));
    }
    g4081d7 = reinterpret_cast<void**>("_construct null not valid");
    rdx28 = r15_22 + 16;
    if (rcx25 == rdx28) {
        __asm__("movups xmm0, [rcx]");
        __asm__("movups [rsi], xmm0");
    } else {
        g4081d7 = rcx25;
        g4081e7 = *reinterpret_cast<void***>(r15_22 + 16);
    }
    g4081df = rax24;
    *reinterpret_cast<void***>(r15_22) = rdx28;
    *reinterpret_cast<void***>(r15_22 + 8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r15_22 + 16) = reinterpret_cast<void**>(0);
    goto v29;
    addr_4041f9_19:
    if (reinterpret_cast<unsigned char>(r13_19) > reinterpret_cast<unsigned char>(15)) {
        rax20 = fun_401ef0(r14_5, reinterpret_cast<int64_t>(rsp8) + 8);
        *reinterpret_cast<void***>(r14_5) = rax20;
        rcx17 = r13_19;
        *reinterpret_cast<void***>(r14_5 + 16) = rcx17;
    }
    if (r13_19) {
        if (!reinterpret_cast<int1_t>(r13_19 == 1)) {
            fun_402240(rax20, r12_21, r13_19, rcx17, r8_30);
        } else {
            *reinterpret_cast<void***>(rax20) = *reinterpret_cast<void***>(r12_21);
        }
    }
    *reinterpret_cast<void***>(r14_5 + 8) = r13_19;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_5)) + reinterpret_cast<unsigned char>(r13_19)) = 0;
    goto addr_404250_11;
    addr_40419c_8:
    rbx10 = *reinterpret_cast<void***>(r15_4 + 8);
    goto addr_4041a0_5;
    addr_40417d_10:
    goto addr_4041a0_5;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::swap(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) */
int64_t _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4swapERS4_ = 0x402006;

void fun_402000(void** rdi, void** rsi, void** rdx) {
    goto _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4swapERS4_;
}

/* WordMap::get(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN7WordMap3getENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    void** rsp6;
    void** r12_7;
    void** v8;
    void** r15_9;
    void** rbx10;
    void** rax11;
    void** rax12;
    void** rbx13;
    void** rax14;
    void** rax15;

    rsp6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 40);
    r12_7 = rsp6 + 16;
    v8 = r12_7;
    r15_9 = *reinterpret_cast<void***>(rsi);
    rbx10 = *reinterpret_cast<void***>(rsi + 8);
    if (r15_9 || !rbx10) {
        if (reinterpret_cast<unsigned char>(rbx10) <= reinterpret_cast<unsigned char>(15)) {
            rax11 = r12_7;
        } else {
            *reinterpret_cast<int32_t*>(&rdx) = 0;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rax11 = fun_401ef0(rsp6, rsp6 + 32);
            rsp6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6 - 8) + 8);
            v8 = rax11;
            rcx = rbx10;
        }
        if (rbx10) {
            if (!reinterpret_cast<int1_t>(rbx10 == 1)) {
                rdx = rbx10;
                fun_402240(rax11, r15_9, rdx, rcx, r8);
                rsp6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp6 - 8) + 8);
            } else {
                *reinterpret_cast<void***>(rax11) = *reinterpret_cast<void***>(r15_9);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(rbx10)) = 0;
        rax12 = _ZN7WordMap8getIndexENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rdi, rsp6, rdx);
        rbx13 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi) + reinterpret_cast<unsigned char>(rax12) * 8);
        if (v8 != r12_7) {
            fun_401ec0(v8, v8);
        }
        return rbx13;
    } else {
        rax14 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
        if (v8 != r12_7) {
            fun_401ec0(v8);
        }
        rax15 = fun_402210(rax14, rsi);
        fun_4021e0(rax14, rsi);
        fun_401ff0();
        *reinterpret_cast<void***>(rax14 + 8) = rax14 + 24;
        *reinterpret_cast<void***>(rax14 + 16) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(rax14 + 24) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(rax14) = reinterpret_cast<void**>(0);
        fun_401fc0(rax14 + 8, rsi, rdx, rcx);
        goto rax15;
    }
}

/* IndexList::IndexList(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN9IndexListC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx, void** rcx) {
    void** rax5;

    *reinterpret_cast<void***>(rdi + 8) = rdi + 24;
    *reinterpret_cast<void***>(rdi + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(rdi + 24) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(0);
    rax5 = fun_401fc0(rdi + 8, rsi, rdx, rcx);
    return rax5;
}

/* IndexList::insert(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int) */
void** _ZN9IndexList6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi(void** rdi, void** rsi, void** edx) {
    void** rdx3;
    void* rsp4;
    void** ebx5;
    void** r12_6;
    void** v7;
    void** r14_8;
    void** rbp9;
    void** rax10;
    void* rsp11;
    void** rsp12;
    void** r12_13;
    void** v14;
    void** r15_15;
    void** rbx16;
    void** rax17;
    void** rcx18;
    void** r8_19;
    void** rdx20;
    int64_t v21;
    void** rax22;
    void** r15_23;
    void** rax24;
    void** rbx25;
    void** rsi26;
    void** rax27;
    void** rcx28;
    void** r8_29;
    void** rcx30;
    void** rsi31;
    void** v32;
    void** rax33;
    void* rsp34;
    void** r15_35;
    void** rax36;
    void* rsp37;
    void** r15_38;
    void** rax39;
    void** v40;
    void** r14_41;
    void** rbp42;
    void** r8_43;
    void** r12_44;
    void** rsi45;
    void** rcx46;
    void** rbp47;
    void** rax48;
    unsigned char r13b49;
    void** rax50;
    int64_t rdi51;
    void** r14_52;
    void** rcx53;
    void** rbp54;
    unsigned char r12b55;
    void** rax56;
    int64_t rdi57;

    rdx3 = edx;
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x68);
    ebx5 = rdx3;
    r12_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 72);
    v7 = r12_6;
    r14_8 = *reinterpret_cast<void***>(rsi);
    rbp9 = *reinterpret_cast<void***>(rsi + 8);
    if (!r14_8 && rbp9) {
        rax10 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        if (v7 != r12_6) {
            fun_401ec0(v7);
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
        }
        fun_402210(rax10, rsi);
        rsp12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp11) - 8 + 8 - 8 - 8 - 8 - 8 - 40);
        r12_13 = rsp12 + 16;
        v14 = r12_13;
        r15_15 = *reinterpret_cast<void***>(rsi);
        rbx16 = *reinterpret_cast<void***>(rsi + 8);
        if (r15_15 || !rbx16) {
            if (reinterpret_cast<unsigned char>(rbx16) <= reinterpret_cast<unsigned char>(15)) {
                rax17 = r12_13;
            } else {
                rax17 = fun_401ef0(rsp12, rsp12 + 32);
                rsp12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp12 - 8) + 8);
                v14 = rax17;
                rcx18 = rbx16;
            }
            if (rbx16) {
                if (!reinterpret_cast<int1_t>(rbx16 == 1)) {
                    fun_402240(rax17, r15_15, rbx16, rcx18, r8_19);
                    rsp12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp12 - 8) + 8);
                } else {
                    *reinterpret_cast<void***>(rax17) = *reinterpret_cast<void***>(r15_15);
                }
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v14) + reinterpret_cast<unsigned char>(rbx16)) = 0;
            rdx20 = *reinterpret_cast<void***>(rax10);
            _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPNS_4NodeE(rax10, rsp12, rdx20);
            if (v14 != r12_13) {
                fun_401ec0(v14, v14);
            }
            goto v21;
        } else {
            rax22 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
            if (v14 != r12_13) {
                fun_401ec0(v14);
            }
            fun_402210(rax22, rsi);
            r15_23 = rax22;
            rax24 = r15_23 + 8;
            __asm__("xorps xmm0, xmm0");
            __asm__("movups [r15+0x18], xmm0");
            __asm__("movups [r15+0x8], xmm0");
            *reinterpret_cast<void***>(r15_23 + 40) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(r15_23 + 24) = rax24;
            *reinterpret_cast<void***>(r15_23 + 32) = rax24;
            rbx25 = *reinterpret_cast<void***>(rsi);
            while (rbx25) {
                rsi26 = *reinterpret_cast<void***>(rbx25 + 56);
                _ZNSt3setIiSt4lessIiESaIiEE6insertISt23_Rb_tree_const_iteratorIiEEEvT_S7_(r15_23, rsi26, rbx25 + 40);
                rbx25 = *reinterpret_cast<void***>(rbx25 + 80);
            }
            goto v14;
        }
    }
    if (reinterpret_cast<unsigned char>(rbp9) <= reinterpret_cast<unsigned char>(15)) {
        rax27 = r12_6;
    } else {
        rdx3 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
        rax27 = fun_401ef0(reinterpret_cast<int64_t>(rsp4) + 56, reinterpret_cast<int64_t>(rsp4) + 88);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        v7 = rax27;
        rcx28 = rbp9;
    }
    if (rbp9) {
        if (!reinterpret_cast<int1_t>(rbp9 == 1)) {
            rdx3 = rbp9;
            fun_402240(rax27, r14_8, rdx3, rcx28, r8_29);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        } else {
            *reinterpret_cast<void***>(rax27) = *reinterpret_cast<void***>(r14_8);
        }
    }
    rcx30 = v7;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx30) + reinterpret_cast<unsigned char>(rbp9)) = 0;
    rsi31 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 56);
    v32 = rdi;
    rax33 = _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rdi, rsi31, rdx3);
    rsp34 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    r15_35 = rax33;
    if (v7 != r12_6) {
        rax33 = fun_401ec0(v7, v7);
        rsp34 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp34) - 8 + 8);
    }
    if (r15_35) 
        goto addr_4055e6_35;
    rax36 = fun_402200(88, rsi31, rdx3, rcx30);
    rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp34) - 8 + 8);
    r15_38 = rax36;
    rax39 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp37) + 40);
    v40 = rax39;
    r14_41 = *reinterpret_cast<void***>(rsi);
    rbp42 = *reinterpret_cast<void***>(rsi + 8);
    if (!r14_41 && rbp42) {
        rax39 = fun_4020d0("basic_string::_M_construct null not valid", rsi31, "basic_string::_M_construct null not valid", rsi31);
        rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
    }
    if (reinterpret_cast<unsigned char>(rbp42) > reinterpret_cast<unsigned char>(15)) {
        rdx3 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
        rax39 = fun_401ef0(reinterpret_cast<int64_t>(rsp37) + 24, reinterpret_cast<int64_t>(rsp37) + 96);
        rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
        v40 = rax39;
        rcx30 = rbp42;
    }
    if (rbp42) {
        if (!reinterpret_cast<int1_t>(rbp42 == 1)) {
            rdx3 = rbp42;
            fun_402240(rax39, r14_41, rdx3, rcx30, r8_43);
            rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
        } else {
            *reinterpret_cast<void***>(rax39) = *reinterpret_cast<void***>(r14_41);
        }
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v40) + reinterpret_cast<unsigned char>(rbp42)) = 0;
    *reinterpret_cast<void***>(r15_38) = rax36 + 16;
    *reinterpret_cast<void***>(r15_38 + 8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r15_38 + 16) = reinterpret_cast<void**>(0);
    r12_44 = rax36 + 40;
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [r15+0x38], xmm0");
    __asm__("movups [r15+0x28], xmm0");
    *reinterpret_cast<int64_t*>(r15_38 + 72) = 0;
    *reinterpret_cast<void***>(r15_38 + 56) = r12_44;
    *reinterpret_cast<void***>(r15_38 + 64) = r12_44;
    rsi45 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp37) + 24);
    fun_401fc0(r15_38, rsi45, rdx3, v40);
    rsp34 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
    *reinterpret_cast<void***>(r15_38 + 80) = reinterpret_cast<void**>(0);
    rcx46 = *reinterpret_cast<void***>(r15_38 + 48);
    rbp47 = r12_44;
    if (rcx46) 
        goto addr_405769_45;
    addr_405793_46:
    if (rbp47 == *reinterpret_cast<void***>(r15_38 + 56)) 
        goto addr_4057a6_47;
    rax48 = fun_401f30(rbp47, rsi45, rdx3, rcx46);
    rsp34 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp34) - 8 + 8);
    addr_4057a1_49:
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax48 + 32)) >= reinterpret_cast<signed char>(ebx5)) {
        addr_4057dd_50:
        if (v40 != reinterpret_cast<int64_t>(rsp34) + 40) {
            fun_401ec0(v40, v40);
        }
    } else {
        addr_4057a6_47:
        if (rbp47) {
            r13b49 = 1;
            if (r12_44 != rbp47) {
                r13b49 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp47 + 32)) > reinterpret_cast<signed char>(ebx5));
            }
            rax50 = fun_402200(40, rsi45, rdx3, rcx46);
            *reinterpret_cast<void***>(rax50 + 32) = ebx5;
            *reinterpret_cast<uint32_t*>(&rdi51) = r13b49;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi51) + 4) = 0;
            fun_402060(rdi51, rax50, rbp47, r12_44);
            rsp34 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp34) - 8 + 8 - 8 + 8);
            *reinterpret_cast<int64_t*>(r15_38 + 72) = *reinterpret_cast<int64_t*>(r15_38 + 72) + 1;
            goto addr_4057dd_50;
        }
    }
    rax33 = *reinterpret_cast<void***>(v32);
    *reinterpret_cast<void***>(r15_38 + 80) = rax33;
    *reinterpret_cast<void***>(v32) = r15_38;
    goto addr_405800_56;
    addr_405769_45:
    do {
        rbp47 = rcx46;
        rdx3 = rbp47 + 24;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp47 + 32)) > reinterpret_cast<signed char>(ebx5)) {
            rdx3 = rbp47 + 16;
        }
        rcx46 = *reinterpret_cast<void***>(rdx3);
    } while (rcx46);
    rax48 = rbp47;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp47 + 32)) <= reinterpret_cast<signed char>(ebx5)) 
        goto addr_4057a1_49; else 
        goto addr_405793_46;
    addr_4055e6_35:
    r14_52 = r15_35 + 40;
    rcx53 = *reinterpret_cast<void***>(r15_35 + 48);
    rbp54 = r14_52;
    if (!rcx53) {
        addr_405623_61:
        if (rbp54 == *reinterpret_cast<void***>(r15_35 + 56)) 
            goto addr_40563a_62;
    } else {
        do {
            rbp54 = rcx53;
            rdx3 = rbp54 + 24;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp54 + 32)) > reinterpret_cast<signed char>(ebx5)) {
                rdx3 = rbp54 + 16;
            }
            rcx53 = *reinterpret_cast<void***>(rdx3);
        } while (rcx53);
        rax33 = rbp54;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp54 + 32)) <= reinterpret_cast<signed char>(ebx5)) 
            goto addr_405631_68; else 
            goto addr_405623_61;
    }
    rax33 = fun_401f30(rbp54, rsi31, rdx3, rcx53);
    addr_405631_68:
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax33 + 32)) >= reinterpret_cast<signed char>(ebx5)) {
        addr_405800_56:
        return rax33;
    } else {
        addr_40563a_62:
        if (rbp54) {
            r12b55 = 1;
            if (r14_52 != rbp54) {
                r12b55 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp54 + 32)) > reinterpret_cast<signed char>(ebx5));
            }
            rax56 = fun_402200(40, rsi31, rdx3, rcx53);
            *reinterpret_cast<void***>(rax56 + 32) = ebx5;
            *reinterpret_cast<uint32_t*>(&rdi57) = r12b55;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = 0;
            rax33 = fun_402060(rdi57, rax56, rbp54, r14_52);
            *reinterpret_cast<int64_t*>(r15_35 + 72) = *reinterpret_cast<int64_t*>(r15_35 + 72) + 1;
            goto addr_405800_56;
        }
    }
}

/* std::__throw_out_of_range_fmt(char const*, ...) */
int64_t _ZSt24__throw_out_of_range_fmtPKcz = 0x401e96;

void fun_401e90(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZSt24__throw_out_of_range_fmtPKcz;
}

void fun_402130(void** rdi, void** rsi, void** rdx);

int64_t g60b678 = 0;

int64_t _ZTTNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE = 0;

int64_t g60b688 = 0;

int64_t g60b680 = 0;

int64_t _ZTTNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE = 0;

int64_t g60b378 = 0;

/* Index::processFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void _ZN5Index11processFileENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(struct s0* rdi, void** rsi) {
    void* rsp3;
    void** v4;
    struct s0* r13_5;
    void** rsi6;
    void** rdi7;
    void** rdx8;
    void* rsp9;
    void** v10;
    void** r14_11;
    int64_t v12;
    void** v13;
    int64_t r12_14;
    int32_t r15d15;
    void** rbx16;
    void** rax17;
    signed char al18;
    void** rdx19;
    int64_t* rax20;
    void* rsp21;
    void** rsi22;
    void** rdx23;
    void** rax24;
    int64_t rsi25;
    void** rax26;
    void* rsp27;
    void* rsp28;
    struct s1* rax29;
    void** v30;
    void** rsi31;
    struct s1* rcx32;
    void** v33;
    void** rbx34;
    struct s1* rbp35;
    void* rsp36;
    uint64_t rbp37;
    void* rsp38;
    int64_t rax39;
    int64_t rcx40;
    void** v41;
    void* rsp42;
    int64_t rcx43;
    void* rsp44;
    int64_t rax45;
    int64_t rcx46;
    void** v47;
    void* rsp48;
    int64_t v49;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x568);
    v4 = rsi;
    r13_5 = rdi;
    rsi6 = *reinterpret_cast<void***>(rsi);
    rdi7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp3) + 0x360);
    rdx8 = reinterpret_cast<void**>(8);
    *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
    fun_402130(rdi7, rsi6, 8);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
    v10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp9) + 0x350);
    r14_11 = *reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp9) + reinterpret_cast<int64_t>(*reinterpret_cast<void**>(v12 - 24)) + 0x450);
    if (r14_11) {
        v13 = reinterpret_cast<void**>(&r13_5->f40);
        r12_14 = g60b678;
        r15d15 = 1;
        rbx16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp9) + 0x1c8);
        goto addr_403500_3;
    }
    while (1) {
        fun_401e80(rdi7, rsi6, rdx8);
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8);
        do {
            addr_403500_3:
            if (!*reinterpret_cast<void***>(r14_11 + 56)) {
                fun_401ee0(r14_11, rsi6, rdx8);
                rax17 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r14_11) + 48);
                al18 = reinterpret_cast<signed char>(rax17(r14_11, 10, rdx8));
                rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8 - 8 + 8);
            } else {
                al18 = *reinterpret_cast<signed char*>(r14_11 + 67);
            }
            *reinterpret_cast<int32_t*>(&rdx19) = al18;
            *reinterpret_cast<int32_t*>(&rdx19 + 4) = 0;
            rax20 = fun_402160(reinterpret_cast<int64_t>(rsp9) + 0x360, reinterpret_cast<int64_t>(rsp9) + 0x340, rdx19);
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8);
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax20) + *reinterpret_cast<int64_t*>(*rax20 - 24) + 32) & 5) 
                goto addr_4037d5_8;
            fun_401f60(rbx16, 16, rdx19);
            rsi22 = *reinterpret_cast<void***>(v4);
            rdx23 = *reinterpret_cast<void***>(v4 + 8);
            rax24 = fun_402020(rbx16, rsi22, rdx23);
            fun_402020(rax24, ":", 1);
            *reinterpret_cast<int32_t*>(&rsi25) = r15d15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = 0;
            rax26 = fun_401e50(rax24, rsi25, 1);
            fun_402020(rax26, ": ", 2);
            fun_402020(rax26, v10, 0);
            rsp27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
            fun_402010(reinterpret_cast<int64_t>(rsp27) + 0x1a8, reinterpret_cast<int64_t>(rsp27) + 0x1d0, 0);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp27) - 8 + 8);
            rax29 = r13_5->f48;
            if (rax29 == r13_5->f56) {
                _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJS5_EEEvDpOT_(v13, reinterpret_cast<int64_t>(rsp28) + 0x1a8, 0);
                rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                if (v30 != reinterpret_cast<int64_t>(rsp28) + 0x1b8) {
                    fun_401ec0(v30, v30);
                    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                }
            } else {
                rax29->f0 = reinterpret_cast<void**>(&rax29->f16);
                rsi31 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0x1b8);
                if (v30 == rsi31) {
                    __asm__("movups xmm0, [rsi]");
                    __asm__("movups [rcx], xmm0");
                    rcx32 = r13_5->f48;
                } else {
                    rax29->f0 = v30;
                    *reinterpret_cast<void***>(&rax29->f16) = v33;
                    rcx32 = rax29;
                }
                rax29->f8 = 0;
                v30 = rsi31;
                *reinterpret_cast<signed char*>(&v33) = 0;
                r13_5->f48 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx32) + 32);
            }
            rbx34 = *reinterpret_cast<void***>(&r13_5->f40);
            rbp35 = r13_5->f48;
            fun_4021b0(reinterpret_cast<int64_t>(rsp28) + 40, reinterpret_cast<int64_t>(rsp28) + 0x340, 8);
            rsp36 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
            rbp37 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbp35) - reinterpret_cast<unsigned char>(rbx34)) >> 5;
            rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp36) + 40);
            rdx8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rbp37)) - 1);
            *reinterpret_cast<int32_t*>(&rdx8 + 4) = 0;
            _ZN5Index11processLineERNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEEi(r13_5, rsi6, rdx8);
            rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp36) - 8 + 8);
            rax39 = _ZTTNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE;
            rcx40 = g60b688;
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp38) + reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax39 - 24)) + 40) = rcx40;
            rbx16 = rbx16;
            if (v41 != reinterpret_cast<int64_t>(rsp38) + 0x90) {
                fun_401ec0(v41, v41);
                rsp38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
            }
            fun_402220(reinterpret_cast<int64_t>(rsp38) + 0x70, rsi6, rdx8);
            rsp42 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp38) - 8 + 8);
            rcx43 = g60b680;
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp42) + reinterpret_cast<int64_t>(*reinterpret_cast<void**>(r12_14 - 24)) + 40) = rcx43;
            fun_402080(reinterpret_cast<int64_t>(rsp42) + 0xa0, rsi6, rdx8);
            rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp42) - 8 + 8);
            rax45 = _ZTTNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE;
            rcx46 = g60b378;
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp44) + reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax45 - 24)) + 0x1c8) = rcx46;
            if (v47 != reinterpret_cast<int64_t>(rsp44) + 0x228) {
                fun_401ec0(v47, v47);
                rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 + 8);
            }
            ++r15d15;
            fun_402220(reinterpret_cast<int64_t>(rsp44) + 0x208, rsi6, rdx8);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 + 8);
            rdi7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0x238);
            fun_402080(rdi7, rsi6, rdx8);
            rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            r14_11 = *reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp9) + reinterpret_cast<int64_t>(*reinterpret_cast<void**>(v49 - 24)) + 0x450);
        } while (r14_11);
    }
    addr_4037d5_8:
    if (v10 != reinterpret_cast<int64_t>(rsp21) + 0x350) 
        goto addr_4037ea_22;
    addr_4037ef_23:
    fun_401f40(reinterpret_cast<int64_t>(rsp21) + 0x360, 0x60b6a0, rdx19);
    fun_402080(reinterpret_cast<int64_t>(rsp21) - 8 + 8 + 0x460, 0x60b6a0, rdx19);
    return;
    addr_4037ea_22:
    fun_401ec0(v10, v10);
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
    goto addr_4037ef_23;
}

/* Index::getIndexList(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN5Index12getIndexListENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx) {
    void** rsp4;
    void** r12_5;
    void** v6;
    void** r14_7;
    void** rbx8;
    void** rax9;
    void** rcx10;
    void** r8_11;
    void** r8_12;
    void** rax13;
    void** rax14;
    void** rbx15;
    void** r14_16;
    void** rsi17;
    void** r15_18;

    rsp4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 40);
    r12_5 = rsp4 + 16;
    v6 = r12_5;
    r14_7 = *reinterpret_cast<void***>(rsi);
    rbx8 = *reinterpret_cast<void***>(rsi + 8);
    if (r14_7 || !rbx8) {
        if (reinterpret_cast<unsigned char>(rbx8) <= reinterpret_cast<unsigned char>(15)) {
            rax9 = r12_5;
        } else {
            *reinterpret_cast<int32_t*>(&rdx) = 0;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rax9 = fun_401ef0(rsp4, rsp4 + 32);
            rsp4 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp4 - 8) + 8);
            v6 = rax9;
            rcx10 = rbx8;
        }
        if (rbx8) {
            if (!reinterpret_cast<int1_t>(rbx8 == 1)) {
                rdx = rbx8;
                fun_402240(rax9, r14_7, rdx, rcx10, r8_11);
                rsp4 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp4 - 8) + 8);
            } else {
                *reinterpret_cast<void***>(rax9) = *reinterpret_cast<void***>(r14_7);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<unsigned char>(rbx8)) = 0;
        rax13 = _ZN7WordMap3getENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rdi + 8, rsp4, rdx, v6, r8_12);
        if (v6 != r12_5) {
            fun_401ec0(v6, v6);
        }
        return rax13;
    } else {
        rax14 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
        if (v6 != r12_5) {
            fun_401ec0(v6);
        }
        fun_402210(rax14, rsi);
        rbx15 = rsi;
        r14_16 = rax14;
        if (rbx15) {
            do {
                rsi17 = *reinterpret_cast<void***>(rbx15 + 24);
                _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(r14_16, rsi17, rdx);
                r15_18 = *reinterpret_cast<void***>(rbx15 + 16);
                fun_401ec0(rbx15, rbx15);
                rbx15 = r15_18;
            } while (r15_18);
        }
        goto v6;
    }
}

/* IndexList::sensitiveIndices(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
struct s2* _ZN9IndexList16sensitiveIndicesENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(struct s2* rdi, void** rsi, void** rdx) {
    void* rsp4;
    struct s2* r12_5;
    void** r13_6;
    void** v7;
    void** r15_8;
    void** rbx9;
    void** rax10;
    void** rcx11;
    void** r8_12;
    void** rax13;
    void* rsp14;
    void** r14_15;
    void** rax16;
    void** rdx17;
    void** rsi18;
    void** rax19;
    void** rdx20;
    void** rcx21;
    void** rcx22;
    void** rax23;
    void* rsp24;
    void* rsp25;
    int64_t v26;
    void** rdx27;
    void** rbx28;
    void** r12_29;
    void** rdi30;
    int32_t eax31;
    void** r13_32;
    void** v33;
    void** rax34;
    void** rcx35;
    void** r8_36;
    void** rdx37;
    void** rax38;
    void** r14_39;
    void** r13_40;
    void** r15_41;
    void** r12_42;
    void** rbp43;
    void** rbx44;
    void** rax45;
    void** rcx46;
    void** rax47;
    void** rax48;
    unsigned char bpl49;
    void** rax50;
    int64_t rdi51;
    int64_t v52;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 48);
    r12_5 = rdi;
    r13_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 24);
    v7 = r13_6;
    r15_8 = *reinterpret_cast<void***>(rdx);
    rbx9 = *reinterpret_cast<void***>(rdx + 8);
    if (r15_8 || !rbx9) {
        if (reinterpret_cast<unsigned char>(rbx9) <= reinterpret_cast<unsigned char>(15)) {
            rax10 = r13_6;
        } else {
            *reinterpret_cast<int32_t*>(&rdx) = 0;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rax10 = fun_401ef0(reinterpret_cast<int64_t>(rsp4) + 8, reinterpret_cast<int64_t>(rsp4) + 40);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            v7 = rax10;
            rcx11 = rbx9;
        }
        if (rbx9) {
            if (!reinterpret_cast<int1_t>(rbx9 == 1)) {
                rdx = rbx9;
                fun_402240(rax10, r15_8, rdx, rcx11, r8_12);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax10) = *reinterpret_cast<void***>(r15_8);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v7) + reinterpret_cast<unsigned char>(rbx9)) = 0;
        rax13 = _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rsi, reinterpret_cast<int64_t>(rsp4) + 8, rdx);
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        r14_15 = rax13;
        if (v7 != r13_6) {
            fun_401ec0(v7, v7);
            rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
        }
        if (!r14_15) {
            rax16 = reinterpret_cast<void**>(&r12_5->f8);
            __asm__("xorps xmm0, xmm0");
            __asm__("movups [r12+0x18], xmm0");
            __asm__("movups [r12+0x8], xmm0");
            r12_5->f40 = 0;
            r12_5->f24 = rax16;
            r12_5->f32 = rax16;
        } else {
            rdx17 = reinterpret_cast<void**>(&r12_5->f8);
            __asm__("xorps xmm0, xmm0");
            __asm__("movups [r12+0x18], xmm0");
            __asm__("movups [r12+0x8], xmm0");
            r12_5->f40 = 0;
            r12_5->f24 = rdx17;
            r12_5->f32 = rdx17;
            rsi18 = *reinterpret_cast<void***>(r14_15 + 48);
            if (rsi18) {
                rax19 = _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_M_copyINS5_11_Alloc_nodeEEEPSt13_Rb_tree_nodeIiEPKS9_SA_RT_(r12_5, rsi18, rdx17, reinterpret_cast<int64_t>(rsp14) + 40);
                r12_5->f16 = rax19;
                rdx20 = rax19;
                do {
                    rcx21 = rdx20;
                    rdx20 = *reinterpret_cast<void***>(rcx21 + 16);
                } while (rdx20);
                r12_5->f24 = rcx21;
                do {
                    rcx22 = rax19;
                    rax19 = *reinterpret_cast<void***>(rcx22 + 24);
                } while (rax19);
                r12_5->f32 = rcx22;
                r12_5->f40 = *reinterpret_cast<int64_t*>(r14_15 + 72);
            }
        }
        return r12_5;
    }
    rax23 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
    rsp24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    if (v7 != r13_6) {
        fun_401ec0(v7);
        rsp24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp24) - 8 + 8);
    }
    fun_402210(rax23, rsi);
    rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp24) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 48);
    if (rdx) 
        goto addr_405bee_24;
    addr_405cc5_25:
    goto v26;
    addr_405bee_24:
    rdx27 = *reinterpret_cast<void***>(rdx + 8);
    rbx28 = *reinterpret_cast<void***>(rsi + 8);
    if (rdx27 != rbx28) {
        r12_29 = *reinterpret_cast<void***>(rsi);
        goto addr_405c21_27;
    } else {
        if (!rdx27) {
            goto addr_405cc5_25;
        } else {
            r12_29 = *reinterpret_cast<void***>(rsi);
            rdi30 = *reinterpret_cast<void***>(rdx);
            rsi = r12_29;
            eax31 = fun_402120(rdi30, rsi);
            rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
            if (eax31) {
                addr_405c21_27:
                r13_32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp25) + 24);
                v33 = r13_32;
                if (r12_29 || !rbx28) {
                    if (reinterpret_cast<unsigned char>(rbx28) <= reinterpret_cast<unsigned char>(15)) {
                        rax34 = r13_32;
                    } else {
                        rax34 = fun_401ef0(reinterpret_cast<int64_t>(rsp25) + 8, reinterpret_cast<int64_t>(rsp25) + 40);
                        rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
                        v33 = rax34;
                        rcx35 = rbx28;
                    }
                    if (rbx28) {
                        if (!reinterpret_cast<int1_t>(rbx28 == 1)) {
                            fun_402240(rax34, r12_29, rbx28, rcx35, r8_36);
                            rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
                        } else {
                            *reinterpret_cast<void***>(rax34) = *reinterpret_cast<void***>(r12_29);
                        }
                    }
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v33) + reinterpret_cast<unsigned char>(rbx28)) = 0;
                    rdx37 = *reinterpret_cast<void***>(rdx + 80);
                    _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPNS_4NodeE(rax23, reinterpret_cast<int64_t>(rsp25) + 8, rdx37);
                    if (v33 != r13_32) {
                        fun_401ec0(v33, v33);
                        goto addr_405cc5_25;
                    }
                } else {
                    rax38 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
                    if (v33 != r13_32) {
                        fun_401ec0(v33);
                    }
                    fun_402210(rax38, rsi);
                    r14_39 = rdx27;
                    r13_40 = rsi;
                    r15_41 = rax38;
                    if (r13_40 != r14_39) {
                        r12_42 = r15_41 + 8;
                        rbp43 = *reinterpret_cast<void***>(r15_41 + 40);
                        while (1) {
                            if (!rbp43) 
                                goto addr_405d42_46;
                            rbx44 = *reinterpret_cast<void***>(r15_41 + 32);
                            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx44 + 32)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_40 + 32))) 
                                goto addr_405d9a_48;
                            addr_405d42_46:
                            rax45 = *reinterpret_cast<void***>(r15_41 + 16);
                            rbx44 = r12_42;
                            if (!rax45) {
                                addr_405d83_49:
                                if (rbx44 == *reinterpret_cast<void***>(r15_41 + 24)) 
                                    goto addr_405d9a_48;
                            } else {
                                rcx46 = *reinterpret_cast<void***>(r13_40 + 32);
                                *reinterpret_cast<int32_t*>(&rcx46 + 4) = 0;
                                do {
                                    rbx44 = rax45;
                                    rdx27 = *reinterpret_cast<void***>(rbx44 + 32);
                                    *reinterpret_cast<int32_t*>(&rdx27 + 4) = 0;
                                    rsi = rbx44 + 24;
                                    if (reinterpret_cast<signed char>(rcx46) < reinterpret_cast<signed char>(rdx27)) {
                                        rsi = rbx44 + 16;
                                    }
                                    rax45 = *reinterpret_cast<void***>(rsi);
                                } while (rax45);
                                rax47 = rbx44;
                                if (reinterpret_cast<signed char>(rcx46) >= reinterpret_cast<signed char>(rdx27)) 
                                    goto addr_405d95_55; else 
                                    goto addr_405d83_49;
                            }
                            rax47 = fun_401f30(rbx44, rsi, rdx27, rcx46);
                            rcx46 = *reinterpret_cast<void***>(r13_40 + 32);
                            *reinterpret_cast<int32_t*>(&rcx46 + 4) = 0;
                            addr_405d95_55:
                            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax47 + 32)) >= reinterpret_cast<signed char>(rcx46)) {
                                addr_405de0_57:
                                rax48 = fun_401fe0(r13_40, rsi, rdx27, rcx46);
                                r13_40 = rax48;
                                if (r13_40 == r14_39) 
                                    break;
                            } else {
                                addr_405d9a_48:
                                if (rbx44) {
                                    bpl49 = 1;
                                    if (r12_42 != rbx44) {
                                        bpl49 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_40 + 32)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx44 + 32)));
                                    }
                                    rax50 = fun_402200(40, rsi, rdx27, rcx46);
                                    *reinterpret_cast<void***>(rax50 + 32) = *reinterpret_cast<void***>(r13_40 + 32);
                                    *reinterpret_cast<uint32_t*>(&rdi51) = bpl49;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi51) + 4) = 0;
                                    rsi = rax50;
                                    rdx27 = rbx44;
                                    rcx46 = r12_42;
                                    fun_402060(rdi51, rsi, rdx27, rcx46);
                                    rbp43 = *reinterpret_cast<void***>(r15_41 + 40) + 1;
                                    *reinterpret_cast<void***>(r15_41 + 40) = rbp43;
                                    goto addr_405de0_57;
                                }
                            }
                        }
                    }
                    goto v52;
                }
            } else {
                goto addr_405cc5_25;
            }
        }
    }
}

/* std::_Rb_tree_increment(std::_Rb_tree_node_base const*) */
int64_t _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base = 0x401fe6;

void** fun_401fe0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base;
}

/* WordMap::getIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN7WordMap8getIndexENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx) {
    void** r14_4;
    void** r15_5;
    void** rdi6;
    void** rsi7;
    int64_t rax8;
    void* rsp9;
    void** rdx10;
    void** rbx11;
    void** rsi12;
    void** r13_13;
    void** r12_14;
    int32_t ebp15;
    void** v16;
    void** rsi17;
    void** v18;
    int32_t eax19;
    void** v20;

    r14_4 = rsi;
    r15_5 = rdi;
    rdi6 = *reinterpret_cast<void***>(r14_4);
    rsi7 = *reinterpret_cast<void***>(r14_4 + 8);
    rax8 = fun_4020c0(rdi6, rsi7, 0xc70f6907);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8);
    rdx10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax8) % reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_5 + 16)));
    rbx11 = rdx10;
    rsi12 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r15_5) + reinterpret_cast<unsigned char>(rbx11) * 8);
    if (rsi12) {
        r13_13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp9) + 24);
        r12_14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp9) + 8);
        do {
            _ZN9IndexList7getWordEv(r12_14, rsi12, rdx10);
            *reinterpret_cast<unsigned char*>(&ebp15) = 1;
            if (v16 == *reinterpret_cast<void***>(r14_4 + 8)) {
                if (!v16) {
                    ebp15 = 0;
                } else {
                    rsi17 = *reinterpret_cast<void***>(r14_4);
                    eax19 = fun_402120(v18, rsi17);
                    *reinterpret_cast<unsigned char*>(&ebp15) = reinterpret_cast<uint1_t>(!!eax19);
                }
            }
            if (v20 != r13_13) {
                fun_401ec0(v20, v20);
            }
        } while (*reinterpret_cast<unsigned char*>(&ebp15) && (rdx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx11 + 1) % reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_5 + 16))), rbx11 = rdx10, rsi12 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r15_5) + reinterpret_cast<unsigned char>(rbx11) * 8), !!rsi12));
    }
    return rbx11;
}

/* WordMap::ensureLoad() */
void _ZN7WordMap10ensureLoadEv(void** rdi) {
    void* rsp2;
    void** r14_3;
    void** r13_4;
    void** rax5;
    void** r12_6;
    void** rbx7;
    void** rax8;
    void** rsi9;
    void** rdx10;
    void* rsp11;
    void** rbp12;
    void** r15_13;
    void** rbx14;
    void** v15;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8);
    r14_3 = rdi;
    r13_4 = *reinterpret_cast<void***>(r14_3 + 16);
    __asm__("movd xmm0, r13");
    __asm__("movdqa xmm1, [rip+0x31be]");
    __asm__("punpckldq xmm0, xmm1");
    __asm__("movapd xmm2, [rip+0x31c2]");
    __asm__("subpd xmm0, xmm2");
    __asm__("pshufd xmm3, xmm0, 0x4e");
    __asm__("addpd xmm3, xmm0");
    __asm__("mulsd xmm3, [rip+0x31bd]");
    __asm__("movq xmm0, [r14+0x8]");
    __asm__("punpckldq xmm0, xmm1");
    __asm__("subpd xmm0, xmm2");
    __asm__("pshufd xmm1, xmm0, 0x4e");
    __asm__("addpd xmm1, xmm0");
    __asm__("ucomisd xmm3, xmm1");
    if (reinterpret_cast<uint64_t>(rsp2) > 40) 
        goto addr_4051bd_2;
    rax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_4) + reinterpret_cast<unsigned char>(r13_4));
    *reinterpret_cast<void***>(r14_3 + 16) = rax5;
    r12_6 = *reinterpret_cast<void***>(r14_3);
    rbx7 = reinterpret_cast<void**>(0xffffffffffffffff);
    if (!__intrinsic()) {
        rbx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax5) * 8);
    }
    rax8 = fun_401eb0(rbx7);
    *reinterpret_cast<int32_t*>(&rsi9) = 0;
    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
    rdx10 = rbx7;
    fun_401e60(rax8);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp2) - 40 - 8 + 8 - 8 + 8);
    *reinterpret_cast<void***>(r14_3) = rax8;
    if (r13_4) 
        goto addr_405163_6;
    if (!r12_6) {
        addr_4051bd_2:
        return;
    } else {
        addr_4051b5_8:
        fun_402110(r12_6, rsi9, rdx10);
        goto addr_4051bd_2;
    }
    addr_405163_6:
    *reinterpret_cast<int32_t*>(&rbp12) = 0;
    *reinterpret_cast<int32_t*>(&rbp12 + 4) = 0;
    r15_13 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp11) + 8);
    do {
        rbx14 = *reinterpret_cast<void***>(r12_6 + reinterpret_cast<unsigned char>(rbp12) * 8);
        if (rbx14 && (_ZN9IndexList7getWordEv(r15_13, rbx14, rdx10), rsi9 = r15_13, rdx10 = rbx14, _ZN7WordMap6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP9IndexList(r14_3, rsi9, rdx10), rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8 - 8 + 8), v15 != reinterpret_cast<uint64_t>(rsp11) + 24)) {
            fun_401ec0(v15, v15);
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8);
        }
        ++rbp12;
    } while (reinterpret_cast<unsigned char>(rbp12) < reinterpret_cast<unsigned char>(r13_4));
    goto addr_4051b5_8;
}

/* IndexList::findNode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx) {
    void** rsp4;
    void** r12_5;
    void** v6;
    void** r15_7;
    void** rbx8;
    void** rax9;
    void** rcx10;
    void** r8_11;
    void** rdx12;
    void** rax13;
    void** rax14;
    void** r15_15;
    void** rax16;
    void** rbx17;
    void** rsi18;

    rsp4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 40);
    r12_5 = rsp4 + 16;
    v6 = r12_5;
    r15_7 = *reinterpret_cast<void***>(rsi);
    rbx8 = *reinterpret_cast<void***>(rsi + 8);
    if (r15_7 || !rbx8) {
        if (reinterpret_cast<unsigned char>(rbx8) <= reinterpret_cast<unsigned char>(15)) {
            rax9 = r12_5;
        } else {
            rax9 = fun_401ef0(rsp4, rsp4 + 32);
            rsp4 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp4 - 8) + 8);
            v6 = rax9;
            rcx10 = rbx8;
        }
        if (rbx8) {
            if (!reinterpret_cast<int1_t>(rbx8 == 1)) {
                fun_402240(rax9, r15_7, rbx8, rcx10, r8_11);
                rsp4 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp4 - 8) + 8);
            } else {
                *reinterpret_cast<void***>(rax9) = *reinterpret_cast<void***>(r15_7);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<unsigned char>(rbx8)) = 0;
        rdx12 = *reinterpret_cast<void***>(rdi);
        rax13 = _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPNS_4NodeE(rdi, rsp4, rdx12);
        if (v6 != r12_5) {
            fun_401ec0(v6, v6);
        }
        return rax13;
    } else {
        rax14 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
        if (v6 != r12_5) {
            fun_401ec0(v6);
        }
        fun_402210(rax14, rsi);
        r15_15 = rax14;
        rax16 = r15_15 + 8;
        __asm__("xorps xmm0, xmm0");
        __asm__("movups [r15+0x18], xmm0");
        __asm__("movups [r15+0x8], xmm0");
        *reinterpret_cast<void***>(r15_15 + 40) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(r15_15 + 24) = rax16;
        *reinterpret_cast<void***>(r15_15 + 32) = rax16;
        rbx17 = *reinterpret_cast<void***>(rsi);
        while (rbx17) {
            rsi18 = *reinterpret_cast<void***>(rbx17 + 56);
            _ZNSt3setIiSt4lessIiESaIiEE6insertISt23_Rb_tree_const_iteratorIiEEEvT_S7_(r15_15, rsi18, rbx17 + 40);
            rbx17 = *reinterpret_cast<void***>(rbx17 + 80);
        }
        goto v6;
    }
}

/* std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&) */
int64_t _ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_ = 0x402066;

void** fun_402060(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    goto _ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_;
}

/* IndexList::findNode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, IndexList::Node*) */
void** _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPNS_4NodeE(void** rdi, void** rsi, void** rdx) {
    void* rsp4;
    void** rbx5;
    void** rdx6;
    void** rbx7;
    void** r12_8;
    void** rdi9;
    int32_t eax10;
    void** r13_11;
    void** v12;
    void** rax13;
    void** rcx14;
    void** r8_15;
    void** rdx16;
    void** rax17;
    void** rax18;
    void** r14_19;
    void** r13_20;
    void** r15_21;
    void** r12_22;
    void** rbp23;
    void** rbx24;
    void** rax25;
    void** rcx26;
    void** rax27;
    void** rax28;
    unsigned char bpl29;
    void** rax30;
    int64_t rdi31;
    int64_t v32;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 48);
    *reinterpret_cast<int32_t*>(&rbx5) = 0;
    *reinterpret_cast<int32_t*>(&rbx5 + 4) = 0;
    if (rdx) {
        rdx6 = *reinterpret_cast<void***>(rdx + 8);
        rbx7 = *reinterpret_cast<void***>(rsi + 8);
        if (rdx6 != rbx7) {
            r12_8 = *reinterpret_cast<void***>(rsi);
            goto addr_405c21_4;
        } else {
            if (!rdx6) {
                rbx5 = rdx;
            } else {
                r12_8 = *reinterpret_cast<void***>(rsi);
                rdi9 = *reinterpret_cast<void***>(rdx);
                rsi = r12_8;
                eax10 = fun_402120(rdi9, rsi);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                if (eax10) {
                    addr_405c21_4:
                    r13_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 24);
                    v12 = r13_11;
                    if (r12_8 || !rbx7) {
                        if (reinterpret_cast<unsigned char>(rbx7) <= reinterpret_cast<unsigned char>(15)) {
                            rax13 = r13_11;
                        } else {
                            rax13 = fun_401ef0(reinterpret_cast<int64_t>(rsp4) + 8, reinterpret_cast<int64_t>(rsp4) + 40);
                            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                            v12 = rax13;
                            rcx14 = rbx7;
                        }
                        if (rbx7) {
                            if (!reinterpret_cast<int1_t>(rbx7 == 1)) {
                                fun_402240(rax13, r12_8, rbx7, rcx14, r8_15);
                                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                            } else {
                                *reinterpret_cast<void***>(rax13) = *reinterpret_cast<void***>(r12_8);
                            }
                        }
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(rbx7)) = 0;
                        rdx16 = *reinterpret_cast<void***>(rdx + 80);
                        rax17 = _ZN9IndexList8findNodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPNS_4NodeE(rdi, reinterpret_cast<int64_t>(rsp4) + 8, rdx16);
                        rbx5 = rax17;
                        if (v12 != r13_11) {
                            fun_401ec0(v12, v12);
                        }
                    } else {
                        rax18 = fun_4020d0("basic_string::_M_construct null not valid", rsi);
                        if (v12 != r13_11) {
                            fun_401ec0(v12);
                        }
                        fun_402210(rax18, rsi);
                        r14_19 = rdx6;
                        r13_20 = rsi;
                        r15_21 = rax18;
                        if (r13_20 != r14_19) {
                            r12_22 = r15_21 + 8;
                            rbp23 = *reinterpret_cast<void***>(r15_21 + 40);
                            while (1) {
                                if (!rbp23) 
                                    goto addr_405d42_23;
                                rbx24 = *reinterpret_cast<void***>(r15_21 + 32);
                                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx24 + 32)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_20 + 32))) 
                                    goto addr_405d9a_25;
                                addr_405d42_23:
                                rax25 = *reinterpret_cast<void***>(r15_21 + 16);
                                rbx24 = r12_22;
                                if (!rax25) {
                                    addr_405d83_26:
                                    if (rbx24 == *reinterpret_cast<void***>(r15_21 + 24)) 
                                        goto addr_405d9a_25;
                                } else {
                                    rcx26 = *reinterpret_cast<void***>(r13_20 + 32);
                                    *reinterpret_cast<int32_t*>(&rcx26 + 4) = 0;
                                    do {
                                        rbx24 = rax25;
                                        rdx6 = *reinterpret_cast<void***>(rbx24 + 32);
                                        *reinterpret_cast<int32_t*>(&rdx6 + 4) = 0;
                                        rsi = rbx24 + 24;
                                        if (reinterpret_cast<signed char>(rcx26) < reinterpret_cast<signed char>(rdx6)) {
                                            rsi = rbx24 + 16;
                                        }
                                        rax25 = *reinterpret_cast<void***>(rsi);
                                    } while (rax25);
                                    rax27 = rbx24;
                                    if (reinterpret_cast<signed char>(rcx26) >= reinterpret_cast<signed char>(rdx6)) 
                                        goto addr_405d95_32; else 
                                        goto addr_405d83_26;
                                }
                                rax27 = fun_401f30(rbx24, rsi, rdx6, rcx26);
                                rcx26 = *reinterpret_cast<void***>(r13_20 + 32);
                                *reinterpret_cast<int32_t*>(&rcx26 + 4) = 0;
                                addr_405d95_32:
                                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax27 + 32)) >= reinterpret_cast<signed char>(rcx26)) {
                                    addr_405de0_34:
                                    rax28 = fun_401fe0(r13_20, rsi, rdx6, rcx26);
                                    r13_20 = rax28;
                                    if (r13_20 == r14_19) 
                                        break;
                                } else {
                                    addr_405d9a_25:
                                    if (rbx24) {
                                        bpl29 = 1;
                                        if (r12_22 != rbx24) {
                                            bpl29 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_20 + 32)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx24 + 32)));
                                        }
                                        rax30 = fun_402200(40, rsi, rdx6, rcx26);
                                        *reinterpret_cast<void***>(rax30 + 32) = *reinterpret_cast<void***>(r13_20 + 32);
                                        *reinterpret_cast<uint32_t*>(&rdi31) = bpl29;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = 0;
                                        rsi = rax30;
                                        rdx6 = rbx24;
                                        rcx26 = r12_22;
                                        fun_402060(rdi31, rsi, rdx6, rcx26);
                                        rbp23 = *reinterpret_cast<void***>(r15_21 + 40) + 1;
                                        *reinterpret_cast<void***>(r15_21 + 40) = rbp23;
                                        goto addr_405de0_34;
                                    }
                                }
                            }
                        }
                        goto v32;
                    }
                } else {
                    rbx5 = rdx;
                }
            }
        }
    }
    return rbx5;
}

struct s17 {
    signed char f0;
    signed char[15] pad16;
    void** f16;
};

/* void std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::_M_emplace_back_aux<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
void** _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJRKS5_EEEvDpOT_(void** rdi, void** rsi, void** rdx) {
    void* rsp4;
    void** r14_5;
    void** rax6;
    void** r12_7;
    void** rdx8;
    void** rsi9;
    void** r13_10;
    void** rcx11;
    void** tmp64_12;
    void** r15_13;
    void** rax14;
    void** rax15;
    int64_t v16;
    void** rax17;
    void* r12_18;
    void** rax19;
    void** rsi20;
    void** rbx21;
    void** rbp22;
    uint64_t r12_23;
    void** r8_24;
    void** rax25;
    void** rbx26;
    void** rcx27;
    void** r12_28;
    uint64_t rax29;
    void* rdx30;
    struct s17* rsi31;
    void** rbp32;
    void** rdi33;
    void** rbp34;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24);
    r14_5 = rdi;
    rax6 = *reinterpret_cast<void***>(r14_5);
    r12_7 = *reinterpret_cast<void***>(r14_5 + 8);
    rdx8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r12_7) - reinterpret_cast<unsigned char>(rax6)) >> 5);
    *reinterpret_cast<int32_t*>(&rsi9) = 1;
    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
    if (rdx8) {
        rsi9 = rdx8;
    }
    r13_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi9) + reinterpret_cast<unsigned char>(rdx8));
    rcx11 = reinterpret_cast<void**>(0x7ffffffffffffff);
    if (reinterpret_cast<unsigned char>(r13_10) >> 59) {
        r13_10 = reinterpret_cast<void**>(0x7ffffffffffffff);
    }
    tmp64_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi9) + reinterpret_cast<unsigned char>(rdx8));
    if (reinterpret_cast<unsigned char>(tmp64_12) < reinterpret_cast<unsigned char>(rsi9)) {
        r13_10 = reinterpret_cast<void**>(0x7ffffffffffffff);
    }
    *reinterpret_cast<int32_t*>(&r15_13) = 0;
    *reinterpret_cast<int32_t*>(&r15_13 + 4) = 0;
    if (r13_10) {
        if (reinterpret_cast<unsigned char>(r13_10) > reinterpret_cast<unsigned char>(0x7ffffffffffffff)) {
            rax14 = fun_4021a0();
            fun_402190(rdi);
            rax15 = fun_402210(rax14, tmp64_12);
            __clang_call_terminate(rax15, tmp64_12, rdx8, 0x7ffffffffffffff);
            *reinterpret_cast<void***>(rax15) = reinterpret_cast<void**>(0);
            goto v16;
        } else {
            rax17 = fun_402200(reinterpret_cast<unsigned char>(r13_10) << 5, tmp64_12, rdx8, 0x7ffffffffffffff);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            r15_13 = rax17;
            rax6 = *reinterpret_cast<void***>(r14_5);
            r12_7 = *reinterpret_cast<void***>(r14_5 + 8);
        }
    }
    r12_18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r12_7) - reinterpret_cast<unsigned char>(rax6));
    rax19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_13) + reinterpret_cast<uint64_t>(r12_18) + 16);
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_13) + reinterpret_cast<uint64_t>(r12_18)) = rax19;
    rsi20 = *reinterpret_cast<void***>(rsi);
    rbx21 = *reinterpret_cast<void***>(rsi + 8);
    if (!rsi20 && rbx21) {
        rax19 = fun_4020d0("basic_string::_M_construct null not valid", rsi20);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    }
    rbp22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_13) + reinterpret_cast<uint64_t>(r12_18));
    r12_23 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r12_18) >> 5);
    if (reinterpret_cast<unsigned char>(rbx21) > reinterpret_cast<unsigned char>(15)) {
        rax19 = fun_401ef0(rbp22, reinterpret_cast<int64_t>(rsp4) + 16);
        *reinterpret_cast<void***>(rbp22) = rax19;
        rcx11 = rbx21;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_13) + (r12_23 << 5) + 16) = rcx11;
        rsi20 = rsi20;
    }
    if (rbx21) {
        if (!reinterpret_cast<int1_t>(rbx21 == 1)) {
            fun_402240(rax19, rsi20, rbx21, rcx11, r8_24);
        } else {
            *reinterpret_cast<void***>(rax19) = *reinterpret_cast<void***>(rsi20);
        }
    }
    rax25 = rbx21;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_13) + (r12_23 << 5) + 8) = rax25;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp22)) + reinterpret_cast<unsigned char>(rax25)) = 0;
    rbx26 = *reinterpret_cast<void***>(r14_5);
    rcx27 = *reinterpret_cast<void***>(r14_5 + 8);
    if (rbx26 == rcx27) {
        r12_28 = r15_13 + 32;
    } else {
        rax29 = reinterpret_cast<uint64_t>(rcx27 + 0xffffffffffffffe0);
        *reinterpret_cast<int32_t*>(&rdx30) = 16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = 0;
        do {
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_13) + reinterpret_cast<uint64_t>(rdx30) + 0xfffffffffffffff0) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r15_13) + reinterpret_cast<uint64_t>(rdx30));
            rsi31 = reinterpret_cast<struct s17*>(reinterpret_cast<unsigned char>(rbx26) + reinterpret_cast<uint64_t>(rdx30));
            if (*reinterpret_cast<struct s17**>(reinterpret_cast<unsigned char>(rbx26) + reinterpret_cast<uint64_t>(rdx30) + 0xfffffffffffffff0) == rsi31) {
                __asm__("movups xmm0, [rdi]");
                __asm__("movups [r15+rdx], xmm0");
            } else {
                *reinterpret_cast<struct s17**>(reinterpret_cast<unsigned char>(r15_13) + reinterpret_cast<uint64_t>(rdx30) + 0xfffffffffffffff0) = *reinterpret_cast<struct s17**>(reinterpret_cast<unsigned char>(rbx26) + reinterpret_cast<uint64_t>(rdx30) + 0xfffffffffffffff0);
                *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r15_13) + reinterpret_cast<uint64_t>(rdx30)) = *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbx26) + reinterpret_cast<uint64_t>(rdx30));
            }
            *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r15_13) + reinterpret_cast<uint64_t>(rdx30) + 0xfffffffffffffff8) = *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi31) + 0xfffffffffffffff8);
            *reinterpret_cast<struct s17**>(reinterpret_cast<uint64_t>(rsi31) + 0xfffffffffffffff0) = rsi31;
            *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi31) + 0xfffffffffffffff8) = 0;
            rsi31->f0 = 0;
            rdx30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx30) + 32);
        } while (!reinterpret_cast<int1_t>(&rsi31->f16 == rcx27));
        rax25 = reinterpret_cast<void**>(rax29 - reinterpret_cast<unsigned char>(rbx26) & 0xffffffffffffffe0);
        rbp32 = *reinterpret_cast<void***>(r14_5);
        rbx26 = *reinterpret_cast<void***>(r14_5 + 8);
        r12_28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax25) + reinterpret_cast<unsigned char>(r15_13) + 64);
        if (rbp32 != rbx26) 
            goto addr_4071d5_27;
    }
    addr_407204_28:
    if (rbx26) {
        rax25 = fun_401ec0(rbx26, rbx26);
    }
    *reinterpret_cast<void***>(r14_5) = r15_13;
    *reinterpret_cast<void***>(r14_5 + 8) = r12_28;
    *reinterpret_cast<void***>(r14_5 + 16) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r13_10) << 5) + reinterpret_cast<unsigned char>(r15_13));
    return rax25;
    addr_4071d5_27:
    do {
        rdi33 = *reinterpret_cast<void***>(rbp32);
        rbp34 = rbp32 + 16;
        if (rdi33 != rbp34) {
            rax25 = fun_401ec0(rdi33);
        }
        rbp32 = rbp34 + 16;
    } while (rbp32 != rbx26);
    rbx26 = *reinterpret_cast<void***>(r14_5);
    goto addr_407204_28;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > __gnu_cxx::__to_xstring<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, char>(int (*)(char*, unsigned long, char const*, __va_list_tag*), unsigned long, char const*, ...) */
void** _ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z(void** rdi, int64_t rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    void* rsp7;
    signed char al8;
    void** r15_9;
    void** rcx10;
    int64_t* rsp11;
    int32_t eax12;
    void* rsp13;
    void** rbx14;
    void** rax15;
    int64_t* rsp16;

    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    if (al8) {
        __asm__("movaps [rbp-0xc0], xmm0");
        __asm__("movaps [rbp-0xb0], xmm1");
        __asm__("movaps [rbp-0xa0], xmm2");
        __asm__("movaps [rbp-0x90], xmm3");
        __asm__("movaps [rbp-0x80], xmm4");
        __asm__("movaps [rbp-0x70], xmm5");
        __asm__("movaps [rbp-0x60], xmm6");
        __asm__("movaps [rbp-0x50], xmm7");
    }
    r15_9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) - 8 - 8 - 8 - 0xd8 - (reinterpret_cast<uint64_t>(rdx + 15) & 0xfffffffffffffff0));
    rcx10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 0xffffffffffffffc0);
    rsp11 = reinterpret_cast<int64_t*>(r15_9 - 8);
    *rsp11 = 0x406c78;
    eax12 = reinterpret_cast<int32_t>(rsi(r15_9, rdx, rcx, rcx10));
    rsp13 = reinterpret_cast<void*>(rsp11 + 1);
    rbx14 = reinterpret_cast<void**>(static_cast<int64_t>(eax12));
    rax15 = rdi + 16;
    *reinterpret_cast<void***>(rdi) = rax15;
    if (*reinterpret_cast<uint32_t*>(&rbx14) > 15) {
        rsp16 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp13) - 8);
        *rsp16 = 0x406c99;
        rax15 = fun_401ef0(rdi, reinterpret_cast<int64_t>(rsp7) + 0xffffffffffffffe0);
        rsp13 = reinterpret_cast<void*>(rsp16 + 1);
        *reinterpret_cast<void***>(rdi) = rax15;
        rcx10 = rbx14;
        *reinterpret_cast<void***>(rdi + 16) = rcx10;
    }
    if (rbx14) {
        if (!reinterpret_cast<int1_t>(rbx14 == 1)) {
            *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp13) - 8) = 0x406cc4;
            fun_402240(rax15, r15_9, rbx14, rcx10, r8);
        } else {
            *reinterpret_cast<void***>(rax15) = *reinterpret_cast<void***>(r15_9);
        }
    }
    *reinterpret_cast<void***>(rdi + 8) = rbx14;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi)) + reinterpret_cast<unsigned char>(rbx14)) = 0;
    return rdi;
}

/* std::out_of_range::out_of_range(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
int64_t _ZNSt12out_of_rangeC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE = 0x402186;

void fun_402180(void** rdi, void* rsi) {
    goto _ZNSt12out_of_rangeC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE;
}

int64_t __cxa_throw = 0x402156;

void** fun_402150(void** rdi, void** rsi, void** rdx, ...) {
    goto __cxa_throw;
}

struct s18 {
    signed char[32] pad32;
    void** f32;
};

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >* std::__uninitialized_copy<false>::__uninit_copy<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*) */
void** _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_(void** rdi, void** rsi, void** rdx) {
    void* rsp4;
    void** rbx5;
    void** v6;
    void** v7;
    void* rax8;
    void** r15_9;
    void* r12_10;
    void** r14_11;
    void** rax12;
    void** rsi13;
    void** r13_14;
    void** rcx15;
    struct s18* rbp16;
    void** r8_17;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40);
    rbx5 = rdx;
    v6 = rsi;
    v7 = rdi;
    if (rdi != rsi) {
        *reinterpret_cast<int32_t*>(&rax8) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        r15_9 = rbx5;
        do {
            r12_10 = rax8;
            r14_11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10));
            rax12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10) + 16);
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10)) = rax12;
            rsi13 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(r12_10));
            r13_14 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(r12_10) + 8);
            if (!rsi13 && r13_14) {
                *reinterpret_cast<int32_t*>(&rdi) = reinterpret_cast<int32_t>("basic_string::_M_construct null not valid");
                *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
                rax12 = fun_4020d0("basic_string::_M_construct null not valid", rsi13, "basic_string::_M_construct null not valid", rsi13);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
            }
            if (reinterpret_cast<unsigned char>(r13_14) > reinterpret_cast<unsigned char>(15)) {
                rax12 = fun_401ef0(r14_11, reinterpret_cast<int64_t>(rsp4) + 32);
                rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10)) = rax12;
                rcx15 = r13_14;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10) + 16) = rcx15;
                r14_11 = r15_9;
                rdi = rdi;
                rsi13 = rsi13;
            }
            rbp16 = reinterpret_cast<struct s18*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(r12_10));
            if (r13_14) {
                if (!reinterpret_cast<int1_t>(r13_14 == 1)) {
                    fun_402240(rax12, rsi13, r13_14, rcx15, r8_17);
                    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
                    rdi = v7;
                } else {
                    *reinterpret_cast<void***>(rax12) = *reinterpret_cast<void***>(rsi13);
                }
            }
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10) + 8) = r13_14;
            rcx15 = *reinterpret_cast<void***>(r14_11);
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx15) + reinterpret_cast<unsigned char>(r13_14)) = 0;
            r15_9 = r15_9 + 32;
            rax8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_10) + 32);
        } while (!reinterpret_cast<int1_t>(&rbp16->f32 == v6));
        rbx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx5) + reinterpret_cast<uint64_t>(r12_10) + 32);
    }
    return rbx5;
}

/* build_tree(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _Z10build_treeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    void** rdi6;
    int64_t rax7;
    int64_t r15_8;
    void** rax9;
    void** rbx10;
    void** rax11;
    void* rsp12;
    void* rsp13;
    void** rsi14;
    void* rsp15;
    void** v16;
    void** v17;
    void** v18;
    void** r14_19;
    struct s14* rax20;
    void* rsp21;
    void** rbx22;
    void** v23;
    void** rax24;
    void** rax25;
    void** v26;
    void** rax27;
    void* rsp28;
    void** r15_29;
    void** v30;
    void** r13_31;
    void** rax32;
    void** r12_33;
    void** r14_34;
    void** v35;
    void** v36;
    void** rbx37;
    void** rbp38;
    void** rsi39;
    struct s6* rax40;
    void* rsp41;
    void** v42;
    void** rcx43;
    void** v44;
    void** rdx45;
    void** v46;
    signed char al47;
    void* rsp48;
    void** v49;
    void** rbp50;
    void** rax51;
    void** rax52;
    void* rsp53;
    void** v54;
    void** rax55;
    void** rbx56;
    void** rdi57;
    void** rbx58;

    rdi6 = *reinterpret_cast<void***>(rdi);
    rax7 = fun_401fa0(rdi6, rsi, rdx);
    r15_8 = rax7;
    if (!r15_8) {
        while (1) {
            fun_402020(0x60b400, "Could not build index, exiting.\n", 32);
            rax9 = fun_401ed0(1, "Could not build index, exiting.\n", 32);
            fun_401ec0(rbx10, rbx10);
            fun_402210(rax9, "Could not build index, exiting.\n", rax9, "Could not build index, exiting.\n");
        }
    }
    rax11 = fun_402200(88, rsi, rdx, rcx);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x148 - 8 + 8 - 8 + 8);
    _Z9base_nameRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<int64_t>(rsp12) + 0x100, rdi, rdx);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    rsi14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp13) + 0x100);
    _ZN7DirNodeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(rax11, rsi14, rdx, rcx);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
    v16 = rdi;
    v17 = rax11;
    if (v18 != reinterpret_cast<int64_t>(rsp15) + 0x110) {
        fun_401ec0(v18, v18);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
    }
    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [rsp+0xe0], xmm0");
    r14_19 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp15) + 0xd0);
    while (rax20 = fun_401fd0(r15_8, rsi14, rdx), rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8), !!rax20) {
        rbx22 = reinterpret_cast<void**>(&rax20->f19);
        v23 = r14_19;
        rax24 = fun_401f90(rbx22, rsi14, rdx);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
        rax25 = r14_19;
        if (reinterpret_cast<unsigned char>(rax24) >= reinterpret_cast<unsigned char>(16)) {
            *reinterpret_cast<int32_t*>(&rdx) = 0;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rsi14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp15) + 0x120);
            rax25 = fun_401ef0(reinterpret_cast<int64_t>(rsp15) + 0xc0, rsi14);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
            v23 = rax25;
            rcx = rax24;
        }
        if (rax24) {
            if (!reinterpret_cast<int1_t>(rax24 == 1)) {
                rsi14 = rbx22;
                rdx = rax24;
                fun_402240(rax25, rsi14, rdx, rcx, r8);
                rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax25) = *reinterpret_cast<void***>(rbx22);
            }
        }
        rcx = v23;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rax24)) = 0;
        if (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v23))) != 46) {
            if (!v26) {
                rsi14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp15) + 0xc0);
                _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_emplace_back_auxIJRKS5_EEEvDpOT_(reinterpret_cast<int64_t>(rsp15) + 0xe0, rsi14, rdx);
                rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
            } else {
                rax27 = v26 + 16;
                *reinterpret_cast<void***>(v26) = rax27;
                if (!v23 && rax24) {
                    rax27 = fun_4020d0("basic_string::_M_construct null not valid", rsi14, "basic_string::_M_construct null not valid", rsi14);
                    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
                }
                if (reinterpret_cast<unsigned char>(rax24) > reinterpret_cast<unsigned char>(15)) {
                    *reinterpret_cast<int32_t*>(&rdx) = 0;
                    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                    rsi14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp15) + 0x128);
                    rax27 = fun_401ef0(v26, rsi14);
                    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
                    *reinterpret_cast<void***>(v26) = rax27;
                    rcx = rax24;
                    *reinterpret_cast<void***>(v26 + 16) = rcx;
                }
                if (rax24) {
                    if (!reinterpret_cast<int1_t>(rax24 == 1)) {
                        rsi14 = v23;
                        rdx = rax24;
                        fun_402240(rax27, rsi14, rdx, rcx, r8);
                        rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
                    } else {
                        *reinterpret_cast<void***>(rax27) = *reinterpret_cast<void***>(v23);
                    }
                }
                *reinterpret_cast<void***>(v26 + 8) = rax24;
                rcx = *reinterpret_cast<void***>(v26);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rax24)) = 0;
                v26 = v26 + 32;
            }
        }
        if (v23 != r14_19) {
            fun_401ec0(v23, v23);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
        }
    }
    fun_4021c0(r15_8, rsi14, rdx);
    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
    r15_29 = v30;
    r13_31 = v26;
    if (r15_29 != r13_31) 
        goto addr_4076b2_31;
    addr_407aaa_32:
    if (r15_29) {
        fun_401ec0(r15_29, r15_29);
    }
    return v17;
    addr_4076b2_31:
    rax32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0xb0);
    r12_33 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0x90);
    r14_34 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 96);
    v35 = r15_29;
    do {
        v36 = rax32;
        rbx37 = *reinterpret_cast<void***>(r15_29);
        rbp38 = *reinterpret_cast<void***>(r15_29 + 8);
        if (!rbx37 && rbp38) {
            rax32 = fun_4020d0("basic_string::_M_construct null not valid", rsi14, "basic_string::_M_construct null not valid", rsi14);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        }
        if (reinterpret_cast<unsigned char>(rbp38) >= reinterpret_cast<unsigned char>(16)) {
            rax32 = fun_401ef0(reinterpret_cast<int64_t>(rsp28) + 0xa0, reinterpret_cast<int64_t>(rsp28) + 0x130);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
            v36 = rax32;
            rcx = rbp38;
        }
        if (rbp38) {
            if (!reinterpret_cast<int1_t>(rbp38 == 1)) {
                fun_402240(rax32, rbx37, rbp38, rcx, r8);
                rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
            } else {
                *reinterpret_cast<void***>(rax32) = *reinterpret_cast<void***>(rbx37);
            }
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v36) + reinterpret_cast<unsigned char>(rbp38)) = 0;
        _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_PKS5_(r14_34, v16, "/");
        rsi39 = v36;
        rax40 = fun_402140(r14_34, rsi39, rbp38);
        rsp41 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8);
        v42 = r12_33;
        rcx43 = reinterpret_cast<void**>(&rax40->f16);
        if (rax40->f0 == rcx43) {
            __asm__("movups xmm0, [rdx]");
            __asm__("movups [r12], xmm0");
        } else {
            v42 = rax40->f0;
            v44 = *reinterpret_cast<void***>(&rax40->f16);
        }
        rdx45 = rax40->f8;
        rax40->f0 = rcx43;
        rax40->f8 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(&rax40->f16) = reinterpret_cast<void**>(0);
        if (v46 != reinterpret_cast<int64_t>(rsp41) + 0x70) {
            fun_401ec0(v46, v46);
            rsp41 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp41) - 8 + 8);
        }
        al47 = _Z7is_filePKc(v42, rsi39, rdx45, rcx43);
        rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp41) - 8 + 8);
        if (!al47) {
            v49 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 48);
            rbp50 = rdx45;
            if (!v42 && rbp50) {
                fun_4020d0("basic_string::_M_construct null not valid", rsi39);
                rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            }
            rax51 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 48);
            if (reinterpret_cast<unsigned char>(rbp50) >= reinterpret_cast<unsigned char>(16)) {
                *reinterpret_cast<int32_t*>(&rdx45) = 0;
                *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
                rsi39 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0x140);
                rax51 = fun_401ef0(reinterpret_cast<int64_t>(rsp48) + 32, rsi39);
                rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
                v49 = rax51;
                rcx43 = rbp50;
            }
            if (rbp50) {
                if (!reinterpret_cast<int1_t>(rbp50 == 1)) {
                    rsi39 = v42;
                    rdx45 = rbp50;
                    fun_402240(rax51, rsi39, rdx45, rcx43, r8);
                    rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax51) = v44;
                }
            }
            rcx = v49;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp50)) = 0;
            rax52 = _Z10build_treeNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(reinterpret_cast<int64_t>(rsp48) + 32, rsi39, rdx45, rcx, r8);
            rsp53 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            if (v49 != reinterpret_cast<int64_t>(rsp53) + 48) {
                fun_401ec0(v49, v49);
                rsp53 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp53) - 8 + 8);
            }
            _ZN7DirNode10set_parentEPS_(rax52, v17, rdx45);
            rsi14 = rax52;
            _ZN7DirNode10add_subdirEPS_(v17, rsi14, rdx45);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp53) - 8 + 8 - 8 + 8);
        } else {
            v54 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 80);
            if (!v36 && rbp38) {
                fun_4020d0("basic_string::_M_construct null not valid", rsi39);
                rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            }
            rax55 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 80);
            if (reinterpret_cast<unsigned char>(rbp38) >= reinterpret_cast<unsigned char>(16)) {
                *reinterpret_cast<int32_t*>(&rdx45) = 0;
                *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
                rax55 = fun_401ef0(reinterpret_cast<int64_t>(rsp48) + 64, reinterpret_cast<int64_t>(rsp48) + 0x138);
                rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
                v54 = rax55;
                rcx43 = rbp38;
            }
            if (rbp38) {
                if (!reinterpret_cast<int1_t>(rbp38 == 1)) {
                    rdx45 = rbp38;
                    fun_402240(rax55, v36, rdx45, rcx43, r8);
                    rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
                } else {
                    *reinterpret_cast<void***>(rax55) = *reinterpret_cast<void***>(v36);
                }
            }
            rcx = v54;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp38)) = 0;
            rsi14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 64);
            _ZN7DirNode8add_fileENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(v17, rsi14, rdx45);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            if (v54 != reinterpret_cast<int64_t>(rsp28) + 80) {
                fun_401ec0(v54, v54);
                rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
            }
        }
        if (v42 != r12_33) {
            fun_401ec0(v42, v42);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        }
        rax32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0xb0);
        if (v36 != rax32) {
            fun_401ec0(v36, v36);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
            rax32 = rax32;
        }
        r15_29 = r15_29 + 32;
    } while (r15_29 != r13_31);
    r15_29 = v35;
    if (r15_29 == r13_31) 
        goto addr_407aaa_32;
    rbx56 = r15_29;
    do {
        rdi57 = *reinterpret_cast<void***>(rbx56);
        rbx58 = rbx56 + 16;
        if (rdi57 != rbx58) {
            fun_401ec0(rdi57, rdi57);
        }
        rbx56 = rbx58 + 16;
    } while (rbx56 != r13_31);
    goto addr_407aaa_32;
}

/* DirNode::set_name(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */
void** _ZN7DirNode8set_nameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(void** rdi, void** rsi, void** rdx) {
    goto _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_;
}

int64_t exit = 0x401ed6;

void** fun_401ed0(int64_t rdi, void** rsi, void** rdx) {
    goto exit;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_of(char const*, unsigned long, unsigned long) const */
int64_t _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcmm = 0x4020e6;

struct s12* fun_4020e0(void** rdi, void** rsi, int64_t rdx, int64_t rcx) {
    goto _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcmm;
}

int64_t readdir = 0x401fd6;

struct s14* fun_401fd0(int64_t rdi, void** rsi, void** rdx) {
    goto readdir;
}

/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*) */
void** _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_PKS5_(void** rdi, void** rsi, void** rdx) {
    void** r14_4;
    void** r13_5;
    void** r15_6;
    void** rbx7;
    void** rax8;
    void** rcx9;
    void** r8_10;
    void** rax11;

    r14_4 = rdx;
    r13_5 = rdi + 16;
    *reinterpret_cast<void***>(rdi) = r13_5;
    r15_6 = *reinterpret_cast<void***>(rsi);
    rbx7 = *reinterpret_cast<void***>(rsi + 8);
    if (r15_6 || !rbx7) {
        if (reinterpret_cast<unsigned char>(rbx7) <= reinterpret_cast<unsigned char>(15)) {
            rax8 = r13_5;
        } else {
            rsi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 16 + 8);
            *reinterpret_cast<int32_t*>(&rdx) = 0;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rax8 = fun_401ef0(rdi, rsi);
            *reinterpret_cast<void***>(rdi) = rax8;
            rcx9 = rbx7;
            *reinterpret_cast<void***>(rdi + 16) = rcx9;
        }
        if (rbx7) {
            if (!reinterpret_cast<int1_t>(rbx7 == 1)) {
                rsi = r15_6;
                rdx = rbx7;
                fun_402240(rax8, rsi, rdx, rcx9, r8_10);
            } else {
                *reinterpret_cast<void***>(rax8) = *reinterpret_cast<void***>(r15_6);
            }
        }
        *reinterpret_cast<void***>(rdi + 8) = rbx7;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi)) + reinterpret_cast<unsigned char>(rbx7)) = 0;
        rax11 = fun_401f90(r14_4, rsi, rdx);
        if (reinterpret_cast<unsigned char>(0x7fffffffffffffff - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 8))) >= reinterpret_cast<unsigned char>(rax11)) 
            goto addr_40806c_10;
    } else {
        fun_4020d0("basic_string::_M_construct null not valid", rsi);
    }
    rax11 = fun_401e40("basic_string::append", "basic_string::append");
    addr_40806c_10:
    fun_402140(rdi, r14_4, rax11);
    return rdi;
}

int64_t __xstat = 0x401fb6;

int32_t fun_401fb0(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    goto __xstat;
}

/* DirNode::DirNode() */
void** _ZN7DirNodeC2Ev(void** rdi) {
    void** r15_2;
    void** rax3;
    void** r14_4;
    void** r12_5;
    void** rbx6;
    void** rdi7;
    void** rbx8;

    r15_2 = rdi;
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [r15+0x20], xmm0");
    __asm__("movups [r15+0x10], xmm0");
    __asm__("movups [r15], xmm0");
    *reinterpret_cast<void***>(r15_2 + 48) = r15_2 + 64;
    *reinterpret_cast<void***>(r15_2 + 56) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r15_2 + 64) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r15_2 + 80) = reinterpret_cast<void**>(0);
    fun_401f70(r15_2 + 48);
    rax3 = *reinterpret_cast<void***>(r15_2);
    *reinterpret_cast<void***>(r15_2 + 8) = rax3;
    r14_4 = *reinterpret_cast<void***>(r15_2 + 24);
    r12_5 = *reinterpret_cast<void***>(r15_2 + 32);
    if (r12_5 != r14_4) {
        rbx6 = r14_4;
        do {
            rdi7 = *reinterpret_cast<void***>(rbx6);
            rbx8 = rbx6 + 16;
            if (rdi7 != rbx8) {
                rax3 = fun_401ec0(rdi7);
            }
            rbx6 = rbx8 + 16;
        } while (rbx6 != r12_5);
    }
    *reinterpret_cast<void***>(r15_2 + 32) = r14_4;
    return rax3;
}

/* WordMap::WordMap() */
void _ZN7WordMapC1Ev(void** rdi) {
    void** rax2;

    __asm__("movd xmm0, rax");
    __asm__("pslldq xmm0, 0x8");
    __asm__("movdqu [r14+0x8], xmm0");
    rax2 = fun_401eb0(0x320);
    fun_401e60(rax2);
    *reinterpret_cast<void***>(rdi) = rax2;
    return;
}

/* std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode) */
int64_t _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode = 0x402136;

void fun_402130(void** rdi, void** rsi, void** rdx) {
    goto _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode;
}

/* std::ios_base::Init::Init() */
int64_t _ZNSt8ios_base4InitC1Ev = 0x401f16;

void fun_401f10(int64_t rdi) {
    goto _ZNSt8ios_base4InitC1Ev;
}

int64_t closedir = 0x4021c6;

void fun_4021c0(int64_t rdi, void** rsi, void** rdx) {
    goto closedir;
}

int64_t __libc_start_main = 0x401f26;

void fun_401f20(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

void fun_402397() {
    int64_t v1;

    goto v1;
}

int64_t __JCR_END__ = 0;

int64_t _Jv_RegisterClasses = 0;

int64_t _ITM_registerTMCloneTable = 0;

void frame_dummy() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    zf1 = __JCR_END__ == 0;
    if (!(zf1 || (rax2 = _Jv_RegisterClasses, rax2 == 0))) {
        rax2();
    }
    if (1) 
        goto 0x4023a0;
    rax3 = _ITM_registerTMCloneTable;
    if (!rax3) 
        goto 0x4023a0;
    goto rax3;
}

void fun_40276b() {
    void* rsp1;
    void** rbx2;
    void** rax3;
    void** rdi4;
    void** v5;
    void** rax6;
    void** v7;
    void** r15_8;
    void** rsi9;
    void** rax10;
    void** v11;

    rsp1 = __zero_stack_offset();
    rbx2 = rax3;
    rdi4 = v5;
    rax6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp1) + 24);
    while (1) {
        if (rdi4 != rax6) {
            fun_401ec0(rdi4);
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
        if (v7 != r15_8) {
            fun_401ec0(v7);
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
        rax10 = fun_402210(rbx2, rsi9);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        rbx2 = rax10;
        rdi4 = v11;
        rax6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp1) + 56);
    }
}

void fun_402951() {
    void** rsi1;
    void** rdx2;
    void** rcx3;
    void** r8_4;
    int64_t r9_5;
    void** rax6;
    void** rsi7;
    void** rax8;
    void** rbx9;
    void** v10;
    void** r15_11;
    void** rsi12;
    void** rax13;
    void** rsi14;

    _ZN5IndexD1Ev(reinterpret_cast<int64_t>(__zero_stack_offset()) + 40, rsi1, rdx2, rcx3, r8_4, r9_5, __return_address());
    rax8 = fun_402210(rax6, rsi7);
    rbx9 = rax8;
    if (v10 != r15_11) {
        fun_401ec0(v10);
        rax13 = fun_402210(rbx9, rsi12);
        rbx9 = rax13;
    }
    fun_402210(rbx9, rsi14);
}

void fun_403056() {
    void* rsp1;
    void** rbp2;
    void** rax3;
    void** v4;
    void** rdi5;
    void** v6;
    void** rbx7;
    void** rsi8;
    void** rax9;
    void** v10;
    void** r15_11;
    void** v12;

    rsp1 = __zero_stack_offset();
    rbp2 = rax3;
    if (v4 != reinterpret_cast<int64_t>(rsp1) + 64) {
        fun_401ec0(v4);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    }
    rdi5 = v6;
    if (rdi5 != rbx7) 
        goto addr_40307f_4;
    while (1) {
        rax9 = fun_402210(rbp2, rsi8);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        rbp2 = rax9;
        if (v10 != r15_11) {
            fun_401ec0(v10);
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
        rdi5 = v12;
        if (!reinterpret_cast<int1_t>(rdi5 == reinterpret_cast<int64_t>(rsp1) + 0xc0)) {
            addr_40307f_4:
            fun_401ec0(rdi5);
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
    }
}

void fun_40306f() {
}

void fun_4030a6() {
    void** v1;
    void** r15_2;

    if (v1 != r15_2) {
        fun_401ec0(v1);
    }
}

void fun_403369() {
    struct s8* r14_1;
    void** rax2;
    void** rsi3;

    _ZN7WordMapD2Ev(r14_1);
    fun_402210(rax2, rsi3);
}

void fun_403820() {
    void* rsp1;
    void** rbx2;
    void** rax3;
    int64_t rax4;
    int64_t rcx5;
    void** rbp6;
    void** v7;
    void** rdx8;
    void* rsp9;
    void** rdx10;
    void* rsp11;
    void** v12;
    void** rdx13;
    void* rsp14;
    void** rdx15;
    void** rax16;
    void* rsp17;
    int64_t rax18;
    int64_t rcx19;
    void** v20;
    void** rdx21;
    void* rsp22;
    int64_t rcx23;
    int64_t r12_24;
    void** rdx25;

    rsp1 = __zero_stack_offset();
    rbx2 = rax3;
    while (1) {
        rax4 = _ZTTNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE;
        rcx5 = g60b378;
        *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp1) + reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax4 - 24)) + 0x1c8) = rcx5;
        rbp6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp1) + 0x350);
        if (v7 != reinterpret_cast<int64_t>(rsp1) + 0x228) {
            fun_401ec0(v7, v7);
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
        fun_402220(reinterpret_cast<int64_t>(rsp1) + 0x208, 0x60b6a0, rdx8);
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        fun_402080(reinterpret_cast<int64_t>(rsp9) + 0x238, 0x60b6a0, rdx10);
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8);
        if (v12 != rbp6) {
            fun_401ec0(v12, v12);
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
        }
        fun_401f40(reinterpret_cast<int64_t>(rsp11) + 0x360, 0x60b6a0, rdx13);
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
        fun_402080(reinterpret_cast<int64_t>(rsp14) + 0x460, 0x60b6a0, rdx15);
        rax16 = fun_402210(rbx2, 0x60b6a0);
        rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8 - 8 + 8);
        rbx2 = rax16;
        rax18 = _ZTTNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE;
        rcx19 = g60b688;
        *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp17) + reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax18 - 24)) + 40) = rcx19;
        if (v20 != reinterpret_cast<int64_t>(rsp17) + 0x90) {
            fun_401ec0(v20, v20);
            rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8);
        }
        fun_402220(reinterpret_cast<int64_t>(rsp17) + 0x70, 0x60b6a0, rdx21);
        rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8);
        rcx23 = g60b680;
        *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp22) + reinterpret_cast<int64_t>(*reinterpret_cast<void**>(r12_24 - 24)) + 40) = rcx23;
        fun_402080(reinterpret_cast<int64_t>(rsp22) + 0xa0, 0x60b6a0, rdx25);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
    }
}

void fun_40398b() {
}

void fun_40405e() {
    void* rsp1;
    void** rbx2;
    void** rax3;
    void** v4;
    void** rsi5;
    void** rax6;

    rsp1 = __zero_stack_offset();
    rbx2 = rax3;
    while (1) {
        if (v4 != reinterpret_cast<int64_t>(rsp1) + 0x138) {
            fun_401ec0(v4);
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
        rax6 = fun_402210(rbx2, rsi5);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        rbx2 = rax6;
    }
}

void fun_404078() {
    void** v1;

    if (v1 == reinterpret_cast<int64_t>(__zero_stack_offset()) + 0xd8) 
        goto 0x4040f6;
    fun_401ec0(v1);
}

void fun_4040bd() {
    void** v1;

    if (v1 == reinterpret_cast<int64_t>(__zero_stack_offset()) + 88) 
        goto 0x4040dc;
    fun_401ec0(v1);
}

void fun_4040d1() {
}

void fun_40411d() {
    goto 0x4040d7;
}

void fun_404d92() {
}

void fun_4052c1() {
    void** rax1;
    void** rsi2;
    void** rdx3;
    void** rcx4;

    __clang_call_terminate(rax1, rsi2, rdx3, rcx4);
}

void fun_4053f2() {
    void** rdi1;
    void*** rbx2;
    void** r15_3;
    void** rax4;
    void** rsi5;

    rdi1 = *rbx2;
    if (rdi1 != r15_3) {
        fun_401ec0(rdi1);
    }
    fun_402210(rax4, rsi5);
}

struct s19 {
    signed char[48] pad48;
    void** f48;
};

void fun_405828() {
    void** rsi1;
    struct s19* r15_2;
    void** v3;
    void** rdx4;
    void* rsp5;
    void** rdi6;
    void*** r15_7;
    void** r14_8;
    void** v9;

    rsi1 = r15_2->f48;
    _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(v3, rsi1, rdx4);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    rdi6 = *r15_7;
    if (rdi6 != r14_8) {
        fun_401ec0(rdi6, rdi6);
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    }
    if (v9 != reinterpret_cast<int64_t>(rsp5) + 40) {
        fun_401ec0(v9, v9);
        goto 0x405874;
    }
}

struct s20 {
    signed char[16] pad16;
    void** f16;
};

void fun_4059bb() {
    void** rsi1;
    struct s20* r15_2;
    void** r15_3;
    void** rdx4;
    void** rax5;

    rsi1 = r15_2->f16;
    _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(r15_3, rsi1, rdx4);
    fun_402210(rax5, rsi1);
}

struct s21 {
    signed char[24] pad24;
    void** f24;
};

struct s22 {
    signed char[32] pad32;
    void** f32;
};

struct s23 {
    signed char[24] pad24;
    void** f24;
};

void fun_405fba() {
    void** r14_1;
    void** rax2;
    void** rdi3;
    void*** rbx4;
    void** r12_5;
    void** rbx6;
    struct s21* r15_7;
    void** r12_8;
    struct s22* r15_9;
    void** rdi10;
    void** rbx11;
    struct s23* r15_12;
    void** rdi13;
    void*** r15_14;
    void** rsi15;

    r14_1 = rax2;
    rdi3 = *rbx4;
    if (rdi3 != r12_5) {
        fun_401ec0(rdi3);
    }
    rbx6 = r15_7->f24;
    r12_8 = r15_9->f32;
    if (rbx6 != r12_8) {
        do {
            rdi10 = *reinterpret_cast<void***>(rbx6);
            rbx11 = rbx6 + 16;
            if (rdi10 != rbx11) {
                fun_401ec0(rdi10);
            }
            rbx6 = rbx11 + 16;
        } while (rbx6 != r12_8);
        rbx6 = r15_12->f24;
    }
    if (rbx6) {
        fun_401ec0(rbx6);
    }
    rdi13 = *r15_14;
    if (rdi13) {
        fun_401ec0(rdi13);
    }
    fun_402210(r14_1, rsi15);
}

void fun_4066d9() {
    void** rbx1;
    void** rsi2;
    void** rdx3;
    void** rax4;
    void** rsi5;

    fun_4020b0(rbx1, rsi2, rdx3);
    fun_402210(rax4, rsi5);
}

void fun_40688b() {
    goto 0x4068ae;
}

void fun_406d31() {
    void** rdi1;
    void** rax2;
    void** rsi3;
    int64_t rbx4;
    void** rbx5;
    void** rsi6;

    rdi1 = rax2;
    fun_4021e0(rdi1, rsi3);
    if (rbx4) {
        rdi1 = rbx5;
        fun_401ec0(rdi1);
    }
    fun_401f00(rdi1, rsi6);
}

struct s24 {
    void** f0;
    signed char[15] pad16;
    void** f16;
};

void fun_407a54() {
    void* rsp1;
    void** v2;
    void** r12_3;
    void** v4;
    struct s24* r14_5;
    struct s24* v6;
    struct s24* rbx7;
    struct s24* v8;
    struct s24* rbp9;
    void** rdi10;
    void** rbp11;

    rsp1 = __zero_stack_offset();
    if (v2 != r12_3) {
        fun_401ec0(v2);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    }
    if (v4 != reinterpret_cast<int64_t>(rsp1) + 0xb0) {
        fun_401ec0(v4);
    }
    r14_5 = v6;
    rbx7 = v8;
    if (r14_5 != rbx7) {
        rbp9 = r14_5;
        do {
            rdi10 = rbp9->f0;
            rbp11 = reinterpret_cast<void**>(&rbp9->f16);
            if (rdi10 != rbp11) {
                fun_401ec0(rdi10);
            }
            rbp9 = reinterpret_cast<struct s24*>(rbp11 + 16);
        } while (rbp9 != rbx7);
    }
    if (!r14_5) 
        goto 0x407b68;
}

void fun_407bb8() {
    goto 0x407b25;
}

void** fun_407cee() {
    void** r12_1;
    void** rax2;
    void** rsi3;
    void** rax4;
    void** rdi5;
    void** rsi6;
    void** rdx7;
    void** rcx8;
    void** r8_9;
    int64_t r9_10;
    void** rdi11;
    void*** rsi12;
    void** rdx13;
    void** rcx14;
    void** r8_15;
    int64_t r9_16;
    void** rax17;

    if (__return_address() != r12_1) {
        fun_401ec0(__return_address());
    }
    rax4 = fun_402210(rax2, rsi3);
    rdi5 = *reinterpret_cast<void***>(rax2);
    _Z6burnerP7DirNode(rdi5, rsi6, rdx7, rcx8, r8_9, r9_10, rax4);
    *reinterpret_cast<void***>(rax2) = reinterpret_cast<void**>(0);
    rdi11 = *rsi12;
    rax17 = _Z14pre_order_copyP7DirNodeS0_(rdi11, 0, rdx13, rcx14, r8_15, r9_16, rax4);
    *reinterpret_cast<void***>(rax2) = rax17;
    return rax2;
}

void fun_407cfc() {
    goto 0x407d16;
}

void fun_407f5f() {
    goto 0x407f9a;
}

void __libc_csu_fini() {
    return;
}

int64_t g60b010 = 0;

void fun_401ea6() {
    goto g60b010;
}

void fun_401e46() {
    goto 0x401e30;
}

/* completed.6904 */
signed char completed_6904 = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = completed_6904 == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        completed_6904 = 1;
    }
    return rax2;
}

void fun_4020f6() {
    goto 0x401e30;
}

void fun_402669() {
    goto 0x402745;
}

void fun_401ef6() {
    goto 0x401e30;
}

void fun_401ec6() {
    goto 0x401e30;
}

void fun_402742() {
}

void fun_402216() {
    goto 0x401e30;
}

void fun_401f96() {
    goto 0x401e30;
}

void fun_402ac8() {
    void** rdi1;
    void*** rbx2;
    void** r13_3;
    void** r14_4;
    void** rsi5;
    void** rdx6;
    void** rcx7;
    void** r8_8;
    int64_t r9_9;

    rdi1 = *rbx2;
    if (rdi1 != r13_3) {
        fun_401ec0(rdi1);
    }
    _ZN6FSTreeD1Ev(r14_4, rsi5, rdx6, rcx7, r8_8, r9_9, __return_address());
}

void fun_402146() {
    goto 0x401e30;
}

void fun_401fc6() {
    goto 0x401e30;
}

void fun_407d9b() {
    void** rax1;
    void** rsi2;
    void** rdx3;
    void** rcx4;

    __clang_call_terminate(rax1, rsi2, rdx3, rcx4);
}

/* FSTree::is_empty() const */
unsigned char _ZNK6FSTree8is_emptyEv(int64_t* rdi) {
    return static_cast<unsigned char>(reinterpret_cast<uint1_t>(*rdi == 0));
}

void fun_402206() {
    goto 0x401e30;
}

void fun_401f76() {
    goto 0x401e30;
}

void fun_403019() {
}

void fun_403002() {
    goto 0x403072;
}

void fun_40302e() {
    goto 0x403045;
}

struct s25 {
    signed char[40] pad40;
    void** f40;
};

struct s26 {
    signed char[48] pad48;
    void** f48;
};

struct s27 {
    signed char[40] pad40;
    void** f40;
};

void fun_40337d() {
    void** r15_1;
    void** rbp2;
    struct s25* r13_3;
    void** rbx4;
    struct s26* r13_5;
    void*** r13_6;
    struct s27* r13_7;
    void** rdi8;
    void** rbp9;

    fun_401ec0(r15_1);
    rbp2 = r13_3->f40;
    rbx4 = r13_5->f48;
    if (rbp2 != rbx4) {
        r13_6 = &r13_7->f40;
        do {
            rdi8 = *reinterpret_cast<void***>(rbp2);
            rbp9 = rbp2 + 16;
            if (rdi8 != rbp9) {
                fun_401ec0(rdi8);
            }
            rbp2 = rbp9 + 16;
        } while (rbp2 != rbx4);
        rbx4 = *r13_6;
    }
    if (!rbx4) 
        goto 0x4033dc;
    fun_401ec0(rbx4);
}

void fun_401f66() {
    goto 0x401e30;
}

void fun_402026() {
    goto 0x401e30;
}

void fun_401e56() {
    goto 0x401e30;
}

void fun_402016() {
    goto 0x401e30;
}

void fun_402226() {
    goto 0x401e30;
}

void fun_402086() {
    goto 0x401e30;
}

void fun_401f46() {
    goto 0x401e30;
}

void fun_403965() {
    void** v1;

    if (v1 == reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x1b8) 
        goto 0x403823;
    fun_401ec0(v1);
    goto 0x403823;
}

void fun_402096() {
    goto 0x401e30;
}

void fun_40402a() {
    goto 0x4040dc;
}

void fun_404066() {
    int64_t v1;
    int64_t r12_2;

    if (v1 != r12_2) 
        goto 0x4040f1;
    goto 0x4040f6;
}

void fun_40407d() {
    goto 0x4040ca;
}

void fun_402176() {
    goto 0x401e30;
}

void fun_404d3e() {
    void** v1;
    void** rbx2;

    if (v1 != rbx2) {
        fun_401ec0(v1);
    }
    goto 0x404d9a;
}

void fun_404d67() {
    int64_t v1;
    int64_t rbx2;

    if (v1 != rbx2) 
        goto 0x404d9f;
    goto 0x404da4;
}

void fun_404d0d() {
    void** v1;
    void** rdx2;
    void** rax3;

    _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(reinterpret_cast<int64_t>(__zero_stack_offset()) + 72, v1, rdx2);
    fun_402210(rax3, v1);
}

void fun_404d83() {
    int64_t v1;
    int64_t r15_2;

    if (v1 != r15_2) 
        goto 0x404d9f;
    goto 0x404da4;
}

void fun_404dbb() {
    goto 0x404d10;
}

void fun_404dcd() {
    void** v1;
    void** r15_2;

    if (v1 == r15_2) 
        goto 0x404d10;
    fun_401ec0(v1);
    goto 0x404d10;
}

void fun_402116() {
    goto 0x401e30;
}

void fun_4051cc() {
    void** v1;
    void** rax2;
    void** rsi3;

    if (v1 != reinterpret_cast<int64_t>(__zero_stack_offset()) + 24) {
        fun_401ec0(v1);
    }
    fun_402210(rax2, rsi3);
}

void fun_401eb6() {
    goto 0x401e30;
}

void fun_401e66() {
    goto 0x401e30;
}

void fun_4020c6() {
    goto 0x401e30;
}

void fun_402126() {
    goto 0x401e30;
}

void fun_4021e6() {
    goto 0x401e30;
}

void fun_401ff6() {
    goto 0x401e30;
}

void fun_401f36() {
    goto 0x401e30;
}

void fun_40586e() {
}

struct s28 {
    signed char[40] pad40;
    void** f40;
    signed char[15] pad56;
    void** f56;
    signed char[23] pad80;
    struct s28* f80;
};

/* IndexList::insensitiveIndices(std::set<int, std::less<int>, std::allocator<int> >*, IndexList::Node*) */
void _ZN9IndexList18insensitiveIndicesEPSt3setIiSt4lessIiESaIiEEPNS_4NodeE() {
    struct s28* rbx1;
    struct s28* rdx2;
    void** r14_3;
    void** rsi4;
    void** rsi5;

    rbx1 = rdx2;
    r14_3 = rsi4;
    while (rbx1) {
        rsi5 = rbx1->f56;
        _ZNSt3setIiSt4lessIiESaIiEE6insertISt23_Rb_tree_const_iteratorIiEEEvT_S7_(r14_3, rsi5, &rbx1->f40);
        rbx1 = rbx1->f80;
    }
    return;
}

void fun_405efc(void** rdi, void** rsi, void** rdx, void** rcx) {
    void** rax5;
    void** rax6;

    fun_402190(rdi);
    rax6 = fun_402210(rax5, rsi);
    __clang_call_terminate(rax6, rsi, rdx, rcx);
}

struct s29 {
    signed char[24] pad24;
    void** f24;
};

struct s30 {
    signed char[32] pad32;
    void** f32;
};

void** fun_40614a() {
    void** r15_1;
    void** rax2;
    void** rdi3;
    void*** r12_4;
    void** rbp5;
    void** rbx6;
    struct s29* r13_7;
    void** rbp8;
    struct s30* r13_9;
    void** rdi10;
    void** rbx11;
    void*** r14_12;
    void** rdi13;
    void*** r13_14;
    void** rsi15;
    void** rax16;
    void** v17;
    void** r14_18;
    void** rsi19;
    void** r13_20;
    void** r15_21;
    void** r12_22;
    void** rbx23;
    void** rbp24;
    void** rdi25;
    void** rbp26;
    void** r12_27;
    void** rdx28;
    int64_t r9_29;

    r15_1 = rax2;
    rdi3 = *r12_4;
    if (rdi3 != rbp5) {
        fun_401ec0(rdi3);
    }
    rbx6 = r13_7->f24;
    rbp8 = r13_9->f32;
    if (rbx6 != rbp8) {
        do {
            rdi10 = *reinterpret_cast<void***>(rbx6);
            rbx11 = rbx6 + 16;
            if (rdi10 != rbx11) {
                fun_401ec0(rdi10);
            }
            rbx6 = rbx11 + 16;
        } while (rbx6 != rbp8);
        rbx6 = *r14_12;
    }
    if (rbx6) {
        fun_401ec0(rbx6);
    }
    rdi13 = *r13_14;
    if (rdi13) {
        fun_401ec0(rdi13);
    }
    rax16 = fun_402210(r15_1, rsi15);
    v17 = rax16;
    r14_18 = rsi19;
    r13_20 = r15_1;
    *reinterpret_cast<void***>(r13_20 + 8) = *reinterpret_cast<void***>(r13_20);
    r15_21 = r13_20 + 24;
    r12_22 = *reinterpret_cast<void***>(r13_20 + 24);
    rbx23 = *reinterpret_cast<void***>(r13_20 + 32);
    if (rbx23 != r12_22) {
        rbp24 = r12_22;
        do {
            rdi25 = *reinterpret_cast<void***>(rbp24);
            rbp26 = rbp24 + 16;
            if (rdi25 != rbp26) {
                fun_401ec0(rdi25);
            }
            rbp24 = rbp26 + 16;
        } while (rbp24 != rbx23);
    }
    *reinterpret_cast<void***>(r13_20 + 32) = r12_22;
    *reinterpret_cast<void***>(r13_20 + 80) = reinterpret_cast<void**>(0);
    r12_27 = r13_20 + 48;
    rdx28 = *reinterpret_cast<void***>(r13_20 + 56);
    fun_401f70(r12_27, r12_27);
    *reinterpret_cast<void***>(r13_20 + 80) = *reinterpret_cast<void***>(r14_18 + 80);
    fun_401fc0(r12_27, r14_18 + 48, rdx28, 0x40832e);
    _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEaSERKS7_(r15_21, r14_18 + 24, rdx28, 0x40832e, 0);
    _ZNSt6vectorIP7DirNodeSaIS1_EEaSERKS3_(r13_20, r14_18, rdx28, 0x40832e, 0, r9_29, v17);
    return r13_20;
}

struct s31 {
    signed char[24] pad24;
    int64_t f24;
    int64_t f32;
};

/* DirNode::has_files() const */
int64_t _ZNK7DirNode9has_filesEv(struct s31* rdi) {
    int64_t rax2;

    rax2 = rdi->f32;
    *reinterpret_cast<unsigned char*>(&rax2) = reinterpret_cast<uint1_t>(rax2 != rdi->f24);
    return rax2;
}

void fun_402046() {
    goto 0x401e30;
}

void fun_4066c5() {
    void* rsp1;
    void** v2;
    void** r15_3;
    void** v4;
    signed char bpl5;

    rsp1 = __zero_stack_offset();
    if (v2 != r15_3) {
        fun_401ec0(v2);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    }
    if (v4 != reinterpret_cast<int64_t>(rsp1) + 24) {
        fun_401ec0(v4);
    }
    if (!bpl5) 
        goto 0x406705; else 
        goto "???";
}

void fun_4066de() {
}

void fun_4020b6() {
    goto 0x401e30;
}

void fun_406890() {
}

void fun_402246() {
    goto 0x401e30;
}

void fun_401f06() {
    goto 0x401e30;
}

void fun_406e6a() {
    void** rdi1;
    void** rax2;
    void** rsi3;
    int64_t r14_4;
    int64_t rbx5;
    struct s24* rbx6;
    void** rbx7;
    struct s24* r14_8;
    void** rsi9;
    void** rax10;
    void** rsi11;
    void** rax12;
    void** rsi13;
    void** rdx14;
    void** rcx15;

    rdi1 = rax2;
    fun_4021e0(rdi1, rsi3);
    if (r14_4 != rbx5) {
        do {
            rdi1 = rbx6->f0;
            rbx7 = reinterpret_cast<void**>(&rbx6->f16);
            if (rdi1 != rbx7) {
                fun_401ec0(rdi1);
            }
            rbx6 = reinterpret_cast<struct s24*>(rbx7 + 16);
        } while (rbx6 != r14_8);
    }
    rax10 = fun_401f00(rdi1, rsi9);
    fun_402190(rdi1);
    rax12 = fun_402210(rax10, rsi11);
    __clang_call_terminate(rax12, rsi13, rdx14, rcx15);
}

void fun_402196() {
    goto 0x401e30;
}

void fun_406fca() {
    void** rdi1;
    void** rax2;
    void** rsi3;
    int64_t r14_4;
    int64_t rbx5;
    struct s24* rbx6;
    void** rbx7;
    struct s24* r14_8;
    void** rsi9;
    void** rax10;
    void** rsi11;
    void** rax12;
    void** rsi13;
    void** rdx14;
    void** rcx15;

    rdi1 = rax2;
    fun_4021e0(rdi1, rsi3);
    if (r14_4 != rbx5) {
        do {
            rdi1 = rbx6->f0;
            rbx7 = reinterpret_cast<void**>(&rbx6->f16);
            if (rdi1 != rbx7) {
                fun_401ec0(rdi1);
            }
            rbx6 = reinterpret_cast<struct s24*>(rbx7 + 16);
        } while (rbx6 != r14_8);
    }
    rax10 = fun_401f00(rdi1, rsi9);
    fun_402190(rdi1);
    rax12 = fun_402210(rax10, rsi11);
    __clang_call_terminate(rax12, rsi13, rdx14, rcx15);
}

void fun_407241() {
    void** rax1;
    void** rsi2;
    int64_t r15_3;
    void** r15_4;
    void** rsi5;

    fun_4021e0(rax1, rsi2);
    if (!r15_3) {
        __asm__("ud2 ");
    }
    fun_401ec0(r15_4);
    fun_401f00(r15_4, rsi5);
}

void fun_40740b() {
}

void fun_401fa6() {
    goto 0x401e30;
}

void fun_407b96() {
    void** v1;

    if (v1 != reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x110) {
        fun_401ec0(v1);
    }
    goto 0x407b63;
}

struct s32 {
    signed char[24] pad24;
    void** f24;
};

struct s33 {
    signed char[32] pad32;
    void** f32;
};

struct s34 {
    signed char[24] pad24;
    void** f24;
};

void** fun_406071() {
    void** r14_1;
    void** rax2;
    void** rdi3;
    void*** rbx4;
    void** r12_5;
    void** rbx6;
    struct s32* r15_7;
    void** r12_8;
    struct s33* r15_9;
    void** rdi10;
    void** rbx11;
    struct s34* r15_12;
    void** rdi13;
    void*** r15_14;
    void** rsi15;
    void** rax16;
    void** rsi17;
    void** rdx18;
    void** rcx19;
    void** rdx20;
    void** rcx21;
    void** r8_22;
    void** rdx23;
    void** rcx24;
    void** r8_25;
    int64_t r9_26;
    void** rax27;

    r14_1 = rax2;
    rdi3 = *rbx4;
    if (rdi3 != r12_5) {
        fun_401ec0(rdi3);
    }
    rbx6 = r15_7->f24;
    r12_8 = r15_9->f32;
    if (rbx6 != r12_8) {
        do {
            rdi10 = *reinterpret_cast<void***>(rbx6);
            rbx11 = rbx6 + 16;
            if (rdi10 != rbx11) {
                fun_401ec0(rdi10);
            }
            rbx6 = rbx11 + 16;
        } while (rbx6 != r12_8);
        rbx6 = r15_12->f24;
    }
    if (rbx6) {
        fun_401ec0(rbx6);
    }
    rdi13 = *r15_14;
    if (rdi13) {
        fun_401ec0(rdi13);
    }
    rax16 = fun_402210(r14_1, rsi15);
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [r13+0x20], xmm0");
    __asm__("movups [r13+0x10], xmm0");
    __asm__("movups [r13+0x0], xmm0");
    *reinterpret_cast<void***>(r14_1 + 48) = r14_1 + 64;
    *reinterpret_cast<void***>(r14_1 + 56) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r14_1 + 64) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r14_1 + 80) = *reinterpret_cast<void***>(rsi17 + 80);
    fun_401fc0(r14_1 + 48, rsi17 + 48, rdx18, rcx19);
    _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEaSERKS7_(r14_1 + 24, rsi17 + 24, rdx20, rcx21, r8_22);
    rax27 = _ZNSt6vectorIP7DirNodeSaIS1_EEaSERKS3_(r14_1, rsi17, rdx23, rcx24, r8_25, r9_26, rax16);
    return rax27;
}

void fun_407684() {
    int64_t v1;
    int64_t r14_2;

    if (v1 != r14_2) 
        goto 0x407b20;
    goto 0x407b25;
}

void fun_407a2b() {
    goto 0x407af9;
}

void fun_407a5c() {
    goto 0x407b0b;
}

void fun_407ace() {
    goto 0x407b25;
}

/* FSTree::FSTree(FSTree const&) */
void _ZN6FSTreeC1ERKS_(void*** rdi, void*** rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    void** rdi7;
    void** rbx8;
    void** rax9;

    rdi7 = *rsi;
    rax9 = _Z14pre_order_copyP7DirNodeS0_(rdi7, 0, rdx, rcx, r8, r9, rbx8);
    *rdi = rax9;
    return;
}

/* FSTree::burn_tree() */
void _ZN6FSTree9burn_treeEv(void*** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    void** rdi7;
    void** rbx8;

    rdi7 = *rdi;
    _Z6burnerP7DirNode(rdi7, rsi, rdx, rcx, r8, r9, rbx8);
    *rdi = reinterpret_cast<void**>(0);
    return;
}

void fun_407d04() {
    void* v1;

    if (v1 == reinterpret_cast<int64_t>(__zero_stack_offset()) + 48) 
        goto 0x407d1b; else 
        goto "???";
}

void fun_4020a6() {
    goto 0x401e30;
}

void fun_401e76() {
    goto 0x401e30;
}

void fun_4080a1() {
    void** rdi1;
    void*** r12_2;
    void** r13_3;
    void** rdi4;
    void** rax5;
    void** rsi6;
    int32_t r15d7;
    int64_t r14_8;
    int64_t rsi9;
    int64_t r13_10;
    int64_t rdx11;
    int64_t rbx12;
    int64_t rdi13;

    rdi1 = *r12_2;
    if (rdi1 != r13_3) {
        fun_401ec0(rdi1);
    }
    rdi4 = rax5;
    fun_402210(rdi4, rsi6);
    r15d7 = *reinterpret_cast<int32_t*>(&rdi4);
    r14_8 = rsi9;
    r13_10 = rdx11;
    *reinterpret_cast<int32_t*>(&rbx12) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx12) + 4) = 0;
    _init();
    if (!0) {
        do {
            *reinterpret_cast<int32_t*>(&rdi13) = r15d7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x60ad90 + rbx12 * 8)(rdi13, r14_8, r13_10);
            ++rbx12;
        } while (rbx12 != 6);
    }
    return;
}

void _fini() {
    return;
}

/* std::runtime_error::~runtime_error() */
int64_t _ZNSt13runtime_errorD1Ev = 0x402106;

/* std::runtime_error::~runtime_error() */
void _ZNSt13runtime_errorD1Ev() {
    goto _ZNSt13runtime_errorD1Ev;
}

void fun_4021d6() {
    goto 0x401e30;
}

void fun_4020d6() {
    goto 0x401e30;
}

void fun_401ee6() {
    goto 0x401e30;
}

void fun_402236() {
    goto 0x401e30;
}

void fun_402076() {
    goto 0x401e30;
}

void fun_401e86() {
    goto 0x401e30;
}

/* std::ios_base::Init::~Init() */
int64_t _ZNSt8ios_base4InitD1Ev = 0x401f86;

/* std::ios_base::Init::~Init() */
void _ZNSt8ios_base4InitD1Ev() {
    goto _ZNSt8ios_base4InitD1Ev;
}

void fun_4021a6() {
    goto 0x401e30;
}

void fun_403382() {
    void** rbp1;

    if (__return_address() == rbp1) 
        goto 0x403393;
    fun_401ec0(__return_address());
}

void fun_402166() {
    goto 0x401e30;
}

/* std::out_of_range::~out_of_range() */
int64_t _ZNSt12out_of_rangeD1Ev = 0x402036;

/* std::out_of_range::~out_of_range() */
void _ZNSt12out_of_rangeD1Ev() {
    goto _ZNSt12out_of_rangeD1Ev;
}

void fun_4021b6() {
    goto 0x401e30;
}

void fun_402006() {
    goto 0x401e30;
}

void fun_404092() {
    goto 0x4040ca;
}

void fun_401e96() {
    goto 0x401e30;
}

void fun_401fe6() {
    goto 0x401e30;
}

int64_t __gxx_personality_v0 = 0x4021f6;

void __gxx_personality_v0() {
    goto __gxx_personality_v0;
}

void fun_402066() {
    goto 0x401e30;
}

struct s35 {
    int64_t f0;
    int64_t f8;
    signed char[8] pad24;
    int64_t f24;
    int64_t f32;
};

/* DirNode::is_empty() const */
int64_t _ZNK7DirNode8is_emptyEv(struct s35* rdi) {
    int64_t rax2;

    if (rdi->f32 != rdi->f24) {
        return 0;
    } else {
        rax2 = rdi->f8;
        *reinterpret_cast<unsigned char*>(&rax2) = reinterpret_cast<uint1_t>(rax2 == rdi->f0);
        return rax2;
    }
}

int64_t vsnprintf = 0x402056;

void vsnprintf() {
    goto vsnprintf;
}

void fun_402186() {
    goto 0x401e30;
}

void fun_402156() {
    goto 0x401e30;
}

int64_t __cxa_atexit = 0x401f56;

/* _GLOBAL__sub_I_gerp.cpp */
void _GLOBAL__sub_I_gerp_cpp() {
    fun_401f10(0x60b741);
    goto __cxa_atexit;
}

void fun_401ed6() {
    goto 0x401e30;
}

void fun_4020e6() {
    goto 0x401e30;
}

void fun_407689() {
    goto 0x407b25;
}

void fun_401fd6() {
    goto 0x401e30;
}

void fun_401fb6() {
    goto 0x401e30;
}

void fun_407a33() {
    goto 0x407b25;
}

void fun_407a64() {
    void* v1;

    if (!reinterpret_cast<int1_t>(v1 == reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70)) 
        goto 0x407b06;
    goto 0x407b0b;
}

void fun_407ad3() {
    void** v1;

    if (v1 == reinterpret_cast<int64_t>(__zero_stack_offset()) + 48) 
        goto 0x407af9;
    fun_401ec0(v1);
}

void fun_402106() {
    goto 0x401e30;
}

void fun_401f86() {
    goto 0x401e30;
}

void fun_402036() {
    goto 0x401e30;
}

void fun_401f56() {
    goto 0x401e30;
}

void fun_4040a1() {
    void** v1;

    if (v1 != reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x78) {
        fun_401ec0(v1);
    }
    goto 0x4040d7;
}

void fun_402136() {
    goto 0x401e30;
}

void fun_4021f6() {
    goto 0x401e30;
}

void fun_402056() {
    goto 0x401e30;
}

/* _GLOBAL__sub_I_FileMapper.cpp */
void _GLOBAL__sub_I_FileMapper_cpp() {
    fun_401f10(0x60b742);
    goto 0x401f50;
}

void fun_401f16() {
    goto 0x401e30;
}

void fun_4021c6() {
    goto 0x401e30;
}

void fun_407ae2() {
}

/* _GLOBAL__sub_I_Index.cpp */
void _GLOBAL__sub_I_Index_cpp() {
    fun_401f10(0x60b743);
    goto 0x401f50;
}

/* _GLOBAL__sub_I_WordMap.cpp */
void _GLOBAL__sub_I_WordMap_cpp() {
    fun_401f10(0x60b744);
    goto 0x401f50;
}

void fun_401f26() {
    goto 0x401e30;
}

/* _GLOBAL__sub_I_FSTree.cpp */
void _GLOBAL__sub_I_FSTree_cpp() {
    fun_401f10(0x60b745);
    goto 0x401f50;
}

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_401f20(0x402790, __return_address(), rsp1, 0x4080c0, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_405ee2() {
    void** rax1;
    void** rsi2;
    void** r14_3;
    void** r15_4;
    void** rdx5;

    while (1) {
        fun_4021e0(rax1, rsi2);
        rsi2 = r14_3;
        _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE(r15_4, rsi2, rdx5);
        rax1 = fun_401f00(r15_4, rsi2);
    }
}
