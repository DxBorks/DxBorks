#include <kernel/vm/vm.h>
#include <kernel/def.h>

uint8_t vm_op_loadc(t_vm *dxvm)
{
  (dxvm->reg)[2] = (dxvm->mem)[++(dxvm->ip) % VM_MEM_SIZE];
  return (KSUCCESS);
}