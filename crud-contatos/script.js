function formatPhone(phone) {
    return phone.replace(/^(\d{2})(\d{5})(\d{4})$/, "($1)$2-$3");
}

function formatCPF(cpf) {
    return cpf.replace(/^(\d{3})(\d{3})(\d{3})(\d{2})$/, "$1.$2.$3-$4");
}

document.getElementById('phone').addEventListener('input', function (e) {
    e.target.value = e.target.value.replace(/\D/g, '').slice(0, 11);
    e.target.value = formatPhone(e.target.value);
});

document.getElementById('cpf').addEventListener('input', function (e) {
    e.target.value = e.target.value.replace(/\D/g, '').slice(0, 11);
    e.target.value = formatCPF(e.target.value);
});

if (document.getElementById('phone-edit')) {
    document.getElementById('phone-edit').value = formatPhone(document.getElementById('phone-edit').value);
    document.getElementById('cpf-edit').value = formatCPF(document.getElementById('cpf-edit').value);
}
